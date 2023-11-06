/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** my_printf_1.c
*/

#include "../../header.h"
#include <stdarg.h>
#include <unistd.h>

void my_str(va_list list)
{
    char *str = va_arg(list, char *);

    write(1, str, my_strlen(str));
}

void my_char(va_list list)
{
    char c = va_arg(list, int);

    write(1, &c, 1);
}

void my_nb(va_list list)
{
    int nb = va_arg(list, int);

    my_put_nbr(nb);
}

void my_lowhexa(va_list list)
{
    int nb = va_arg(list, int);
    char res[9];
    int i;
    int x;

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
