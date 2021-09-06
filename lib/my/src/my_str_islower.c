/*
** EPITECH PROJECT, 2021
** my_strislower.c
** File description:
** return 1 if the string passed as parameter
** only contains lowercase alphabetical char and 0 otherwise
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}
