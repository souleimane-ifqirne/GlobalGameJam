/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** Insert an number display the number.
*/

void my_putchar(char c);

void my_put_unsigned_nbr(unsigned int nb)
{
    if (nb <= 9 && nb >= 0) {
        my_putchar(nb + '0');
    }
    else if (nb < 0) {
        my_putchar('-');
        my_put_unsigned_nbr(-nb);
    }
    else {
        my_put_unsigned_nbr(nb / 10);
        my_put_unsigned_nbr(nb % 10);
    }
}
