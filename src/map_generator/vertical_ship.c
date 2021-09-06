/*
** EPITECH PROJECT, 2021
** vertical_ship.c
** File description:
** put vertical ship on player_map
*/

#include "struct.h"
#include <stdlib.h>

int equal_col_part_3(pos_to_map *pos_player, int i, int col, int lig)
{
    for (int x = 0; x <= (*pos_player).map_positions[i + 6] -
            (*pos_player).map_positions[i + 3]; x++) {
        if ((*pos_player).player_map[(lig + x * 18 + col)] == '.')
            (*pos_player).player_map[(lig + x * 18) + col] =
            (*pos_player).map_positions[i];
        else
            return (84);
    }
    return (0);
}

int equal_col_part_2(pos_to_map *pos_player, int i, int col)
{
    for (int lig = 0; lig < 163; lig += 18)
        if ((*pos_player).player_map[lig] ==
            (*pos_player).map_positions[i + 3]) {
            if (equal_col_part_3(pos_player, i, col, lig) == 84)
                return (84);
            break;
        }
    return (0);
}

int equal_col(pos_to_map *pos_player, int i)
{
    for (int col = 0; col < 18; col += 2)
        if ((*pos_player).player_map[col] ==
            (*pos_player).map_positions[i + 2]) {
            if (equal_col_part_2(pos_player, i, col) == 84)
                return (84);
            break;
        }
    return (0);
}