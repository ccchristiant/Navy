/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** reverse a string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int len = my_strlen(str) - 1;
    char temp;

    for (int i = 0; i < len; i++) {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        len--;
    }
    return (str);
}
