/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** my_printf_2.c.
*/

#include "../../header.h"
#include <stdarg.h>
#include <unistd.h>

void my_uphexa(va_list list)
{
    int nb = va_arg(list, int);
    char res[9];
    int	i;
    int x;

    if (nb < 0)
	nb += 2147483647;
    for	(i = 0; nb > 0; i++) {
	x = nb % 16;
        if (x > 9)
            res[i] = x - 10 + 'A';
        else
            res[i] = x + '0';
        nb /= 16;
    }
    res[i] = '\0';
    my_putstr(my_revstr(res));
}

void my_octal(va_list list)
{
    int nb = va_arg(list, int);
    char res[12];
    int i;

    if (nb < 0)
	nb += 2147483647;
    if (nb < 0)
        nb *= - 1;
    for (i = 0; nb > 0; i++) {
        res[i] = nb % 8 + '0';
        nb /= 8;
    }
    res[i] = '\0';
    my_putstr(my_revstr(res));
}

void my_bin(va_list list)
{
    int nb = va_arg(list, int);
    char res[32];
    int i;

    if (nb < 0)
        nb += 2147483647;
    for (i = 0; nb > 0; i++) {
        res[i] = nb % 2 + '0';
        nb /= 2;
    }
    res[i] = '\0';
    my_putstr(my_revstr(res));
}

void my_unsigned(va_list list)
{
    unsigned int nb = va_arg(list, unsigned int);

    if (nb < 0)
        nb += 4294967296;
    my_put_unsigned_nbr(nb);
}
