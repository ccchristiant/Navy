/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** structs definition
*/

#include <stdarg.h>
#include <sys/types.h>
#include <unistd.h>

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct cpf
{
    char c;
    void (*pf) (va_list ap);
} cpf;

typedef struct data_user_s
{
    pid_t my_pid;
    pid_t adv_pid;
    int status;
    char *map;
    char *adv_map;
    char *attack;
    int get_hit;
    int adv_get_hit;
    int round;
} usr_t;

typedef struct map_positions_player_map
{
    char *map_positions;
    char *player_map;
} pos_to_map;

#endif