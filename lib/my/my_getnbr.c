/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** Get nbr from a string.
*/

int my_getnbr(char const *str)
{
    int res = 0;
    int i = 0;

    for (; str[i] < '0' || str[i] > '9'; i++);
    int neg = (str[i - 1] == '-') ? 1 : 0;
    for (; str[i] > 47 && str[i] < 58; i++)
        res = res * 10 + (str[i] - 48);
    if (neg == 1)
        res *= - 1;
    return (res);
}
