/*
** EPITECH PROJECT, 2021
** my_str_count_word.c
** File description:
** count the number of word in a string
*/

int my_str_count_word(char const *str)
{
    int wordsum = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (my_alphanum(str[i]) == 1 && my_alphanum(str[i + 1]) == 0)
            wordsum++;
    }
    return wordsum;
}
