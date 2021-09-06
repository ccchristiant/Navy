/*
** EPITECH PROJECT, 2021
** init_player2.c
** File description:
** init_player2 fonction
*/

#include "navy.h"
#include "my.h"
#include "struct.h"
#include "com_protocol.h"
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int init_player2(int adv_pid, char *filepath)
{
    struct sigaction sa = {0};

    assign_player_data(filepath);
    p.adv_pid = adv_pid;
    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = &usr_connection;
    my_printf("my_pid: %d\n", p.my_pid);
    while (p.status == 0) {
        kill(p.adv_pid, SIGUSR1);
        sigaction(SIGUSR2, &sa, NULL);
        pause();
    }
    return (play_game());
}
