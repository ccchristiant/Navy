/*
** EPITECH PROJECT, 2021
** man.c
** File description:
** man fonction
*/

#include "my.h"

void man(void)
{
    my_printf("USAGE\n\t");
    my_printf("./navy [first_player_pid] navy_positions\n");
    my_printf("DESCRIPTION\n\t");
    my_printf("first_player_pid: only for the 2nd player. ");
    my_printf("pid of the first player.\n\t");
    my_printf("navy_positions: file representing the");
    my_printf("positions of the ships.\n");
}

