/*
** EPITECH PROJECT, 2021
** my_char_alphanum.c
** File description:
** return the number of alphanum in a string
*/

int my_char_alphanum(char c);

int len_alphanum_str(char const *str)
{
    int i = 0;
    int len = 0;

    while (str[i] != '\0') {
        if (my_char_alphanum(str[i]) == 1)
            len++;
        i++;
    }
    return (len);
}
