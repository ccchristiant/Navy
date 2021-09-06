/*
** EPITECH PROJECT, 2021
** com_protocol.h
** File description:
** com_protocol header file
*/

#ifndef COM_PROTOCOL_H_
#define COM_PROTOCOL_H_

#include <signal.h>
#include "macro.h"

char *get_attack(void);
void send_signal(int p1_pid, char *action);
void fetch_signal(int sig);
void wait_signal(int sig, siginfo_t *info, void *ucontext);
void attack_response_ok(int pid);
void attack_response_err(int pid);
void check_sent_signal(int sig, UNUSED siginfo_t *info, UNUSED void *u);

#endif // end of com_protocol.h definition condition
