/*
** EPITECH PROJECT, 2021
** my_str_to_word_array.c
** File description:
** function that splits astring into words. Separators will
** all be non-alphanumeric characters.The function returns an
** array in which each cell contains the address of a string
** (representing a word).The last cell must be null to terminate the array
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int total_word = my_str_count_word(str);
    char **dest = malloc(sizeof(char *) * (total_word + 1));

    for (int a = 0, wl = 0; i < total_word; i++) {
        while (my_alphanum(str[a]) == 0)
            a++;
        wl = my_wordlen(&str[a]);
        dest[i] = malloc(sizeof(char) * (wl + 1));
        dest[i] = my_strncpy(dest[i], &str[a], wl);
        dest[i][wl] = '\0';
        a += wl;
    }
    dest[i] = NULL;
    return (dest);
}
