/*
** EPITECH PROJECT, 2021
** check_pos_files.c
** File description:
** error handling for pos files
*/

#include "my.h"

int between_A_H(char c)
{
    return ((c >= 'A' && c <= 'H') ? 0 : 84);
}

int between_1_8(char c)
{
    return ((c >= '1' && c <= '8') ? 0 : 84);
}

int check_ships(char *map_positions, int i)
{
    if (between_A_H(map_positions[i + 2]) == 84 ||
        between_1_8(map_positions[i + 3]) == 84 ||
        between_A_H(map_positions[i + 5]) == 84 ||
        between_1_8(map_positions[i + 6]) == 84) {
        return (84);
    }
    if (map_positions[i + 2] != map_positions[i + 5] &&
        map_positions[i + 3] != map_positions[i + 6]) {
        return (84);
    }
    if (map_positions[i + 5] - map_positions[i + 2] + map_positions[i + 6] -
        map_positions[i + 3] + 1 != map_positions[i] - '0') {
        return (84);
    }
    return (0);
}