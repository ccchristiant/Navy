/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** basic main
*/

#include "macro.h"
#include "my.h"
#include "error.h"
#include "navy.h"
#include <stdlib.h>

usr_t p;

int main(int ac, char **av)
{
    if (ac == 1 && ac > 4)
        return (EXIT_ERROR_USAGE);
    if (ac == 2 &&
        (my_strcmp(av[1], "-h") == 0 || my_strcmp(av[1], "--help") == 0)) {
        man();
        return (EXIT_USAGE);
    }
    return (launch_navy(ac, av));
}
