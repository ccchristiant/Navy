/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** copies n characters from a string into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i != n; i++) {
        if (i > n) {
            dest[i] = '\0';
            return (dest);
        }
        dest[i] = src[i];
    }
    return (dest);
}
