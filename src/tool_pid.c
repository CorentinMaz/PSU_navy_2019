/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** tool_pid.c
*/

#include "my.h"

void display_pid(void)
{
    my_putstr("my_pid: ");
    my_put_nbr(getpid());
    my_putchar('\n');
}

void change_pid(int sig, siginfo_t *info, void *context)
{
    if (sig == 10)
        ennemy_pid = -1;
    if (sig == 12)
        ennemy_pid = info->si_pid;
}

void change_sig(void)
{
    struct sigaction act;

    act.sa_sigaction = &change_pid;
    act.sa_flags = SA_SIGINFO;
    sigemptyset(&act.sa_mask);
    sigaction(10, &act, NULL);
    sigaction(12, &act, NULL);
}