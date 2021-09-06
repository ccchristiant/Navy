/*
** EPITECH PROJECT, 2021
** navy.h
** File description:
** navy header file
*/


#ifndef NAVY_H_
#define NAVY_H_

#include "struct.h"
#include "macro.h"
#include <signal.h>
#include <stdio.h>

extern usr_t p;

void man(void);

// map managing

int open_file(char const *filepath);
char *load_file_in_mem(char const *filepath, int n);
char *map_generator(char *map_positions);
int equal_lig(pos_to_map *pos_player, int i);
int equal_col(pos_to_map *pos_player, int i);
int update_map(void);
void update_adv_map(int touch);

// navy game

int launch_navy(int ac, char **av);
int init_player1(char *filepath);
int init_player2(int p1_pid, char *filepath);
void assign_player_data(char *filepath);
void usr_connection(int sig, siginfo_t *info, void *u);
int play_game(void);
void my_turn_to_play(void);
void waiting_my_turn(void);
char *attack_traduction(char *str);
void hit_or_missed(int sig, UNUSED siginfo_t *info, UNUSED void *u);

#endif // end of navy.h definition condition