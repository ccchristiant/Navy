/*
** EPITECH PROJECT, 2021
** horizontal_ship.c
** File description:
** put horizontal ship on player_map
*/

#include "struct.h"
#include <stdlib.h>

int equal_lig_part_3(pos_to_map *pos_player, int i, int lig, int col)
{
    for (int y = 0; y <= (*pos_player).map_positions[i + 5] -
            (*pos_player).map_positions[i + 2]; y++) {
        if ((*pos_player).player_map[lig + col + y * 2] == '.')
            (*pos_player).player_map[lig + col + y * 2] =
            (*pos_player).map_positions[i];
        else
            return (84);
    }
    return (0);
}

int equal_lig_part_2(pos_to_map *pos_player, int i, int lig)
{
    for (int col = 0; col < 18; col += 2)
        if ((*pos_player).player_map[col] ==
            (*pos_player).map_positions[i + 2]) {
            if (equal_lig_part_3(pos_player, i, lig, col) == 84)
                return (84);
            break;
        }
    return (0);
}

int equal_lig(pos_to_map *pos_player, int i)
{
    for (int lig = 0; lig < 163; lig += 18)
        if ((*pos_player).player_map[lig] ==
            (*pos_player).map_positions[i + 3]) {
            if (equal_lig_part_2(pos_player, i, lig) == 84)
                return (84);
            break;
        }
    return (0);
}