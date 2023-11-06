/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** Act like a printf.
*/

#include "../../header.h"
#include <stdarg.h>
#include <unistd.h>

int flag_check(char *flags, char c)
{
    int i = 0;
    for (; flags[i] != c && flags[i] != 0; i++);
    if (flags[i] != 0)
        return (i);
    else
        return (- 1);
}

void condition(int flag_nb, va_list list, char c1, char c2)
{
    void (*function_list[12]) (va_list) = {my_char, my_str, my_nb,
        my_nb, my_capital_s, my_lowhexa, my_uphexa, my_octal, my_bin,
        my_unsigned, my_ptr, my_modulo};

    if (flag_nb != - 1)
        (function_list[flag_nb]) (list);
    else {
        write(1, &c1, 1);
        write(1, &c2, 1);
    }
}

void my_printf(char *str, ...)
{
    int flag_nb = 0;
    va_list list;
    int i = 0;
    char flags[13] = {'c', 's', 'i', 'd', 'S', 'x', 'X', 'o', 'b',
        'u', 'p', '%', 0};

    va_start(list, str);
    for (i = 0; str[i] != 0; i++) {
        if (str[i] == '%') {
            flag_nb = flag_check(flags, str[i + 1]);
            condition(flag_nb, list, str[i], str[i + 1]);
            i++;
        } else
            write(1, &str[i], 1);
    }
    va_end(list);
}
