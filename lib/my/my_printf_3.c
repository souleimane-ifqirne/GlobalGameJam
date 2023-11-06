/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** my_printf_2.c.
*/

#include "../../header.h"
#include <stdarg.h>
#include <unistd.h>

void my_ptr(va_list list)
{
    int nb = va_arg(list, int);
    char res[9];
    int i;
    int x;

    my_putstr("Ox");
    if (nb < 0)
     	nb += 2147483647;
    for (i = 0; nb > 0; i++) {
        x = nb % 16;
        if (x > 9)
            res[i] = x - 10 + 'a';
	else
            res[i] = x + '0';
        nb /= 16;
    }
    res[i] = '\0';
    my_putstr(my_revstr(res));
}

void my_capital_s1(char letter)
{
    char res[4];
    char c;
    int j;
    int strlen;
    int x = 4;

    c = letter;
    for (j = 0; c > 0; j++) {
        res[j] = c % 8 + '0';
        c /= 8;
    }
    res[j] = '\0';
    my_revstr(res);
    strlen = my_strlen(res);
    x -= strlen;
    write(1, "\\00", x);
    my_putstr(res);
}

void my_capital_s(va_list list)
{
    int i;
    char *str = va_arg(list, char *);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 32 && str[i] < 127)
            write(1, &str[i], 1);
        else
            my_capital_s1(str[i]);
    }
}

void my_modulo(va_list list)
{
    write(1, "%", 1);
}
