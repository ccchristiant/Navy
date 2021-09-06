/*
** EPITECH PROJECT, 2021
** init_player1.c
** File description:
** init_player1 fonction
*/

#include "navy.h"
#include "my.h"
#include "struct.h"
#include <stddef.h>
#include <signal.h>

int init_player1(char *filepath)
{
    struct sigaction sa = {0};

    assign_player_data(filepath);
    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = &usr_connection;
    my_printf("my_pid: %d\n", p.my_pid);
    while (p.status == 0) {
        sigaction(SIGUSR1, &sa, NULL);
        my_printf("waiting for enemy connection...\n");
        pause();
    }
    return (play_game());
}