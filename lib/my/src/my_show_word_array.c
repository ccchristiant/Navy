/*
** EPITECH PROJECT, 2021
** my_show_word_array.c
** File description:
** display the content of an array of word
*/

#include <string.h>
#include "my.h"

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        for (int j = 0; tab[i][j] != '\0'; j++) {
            my_putchar(tab[i][j]);
        }
        my_putchar('\n');
    }
    return 0;
}
