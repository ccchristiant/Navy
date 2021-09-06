/*
** EPITECH PROJECT, 2021
** assign_core_data.c
** File description:
** assign_core_data fonction
*/

#include "navy.h"
#include "my.h"
#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void assign_player_data(char *filepath)
{
    char *ship_positions = load_file_in_mem(filepath, 1);

    p.my_pid = getpid();
    p.status = 0;
    p.map = map_generator(ship_positions);
    p.adv_map = load_file_in_mem("src/map_init", 0);
    p.get_hit = 0;
    p.adv_get_hit = 0;
    p.round = 1;
}