/*
** EPITECH PROJECT, 2021
** map_generator.c
** File description:
** map_generator fonction
*/

#include <stddef.h>
#include "navy.h"
#include "error.h"
#include "my.h"
#include "struct.h"

char *map_generator(char *map_positions)
{
    pos_to_map pos_player;

    pos_player.map_positions = map_positions;
    pos_player.player_map = load_file_in_mem("src/map_init", 0);
    for (int i = 0; map_positions[i] != '\0'; i += 8)
    {
        if (check_ships(map_positions, i) == 84)
            return (NULL);
        if (map_positions[i + 2] == map_positions[i + 5] &&
            equal_col(&pos_player, i) == 84)
            return (NULL);
        if (map_positions[i + 3] == map_positions[i + 6] &&
            equal_lig(&pos_player, i) == 84)
            return (NULL);
    }
    return (pos_player.player_map);
}