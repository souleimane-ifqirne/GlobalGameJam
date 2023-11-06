/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int strlen = 0;

    while (dest[strlen] != '\0')
        strlen++;
    while (src[i] != '\0') {
        dest[strlen + i] = src[i];
        i++;
    }
    dest[strlen + i] = '\0';
    return (dest);
}
