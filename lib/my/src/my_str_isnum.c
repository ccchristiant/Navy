/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** returns 1 if the string passed as parameter
** only contains digits and 0 otherwise
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}
