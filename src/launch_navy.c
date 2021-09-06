/*
** EPITECH PROJECT, 2021
** lauch_navy.c
** File description:
** lauch_navy fonction
*/

#include "navy.h"
#include "my.h"
#include "struct.h"

int launch_navy(int ac, char **av)
{
    if (ac == 2)
        return (init_player1(av[1]));
    if (ac == 3 && my_getnbr(av[1]) > 0)
        return (init_player2(my_getnbr(av[1]), av[2]));
    return (84);
}

