/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/
#include "my.h"

var_t init(var_t var)
{
    var.map = map_to_array();
    var.pos = NULL;
    var.map_navy = map_to_array();
    var.player = 0;

    return (var);
}

int check_number_pid(char *pid)
{
    for (int i = 0; pid[i] != '\0'; i++)
        if (pid[i] < '0' || pid[i] > '9')
            return (1);
    return (0);
}

int make_help(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        my_putstr("USAGE\n     ./navy [first_player_pid] navy_positions\n");
        my_putstr("DESCRIPTION\n     first_player_pid: only for the 2nd");
        my_putstr(" player .pid of the first player.\n     ");
        my_putstr("navy_positions: file representing the positions ");
        my_putstr("of the ships.\n");
        return (84);
    } else
        return (0);
}

int main(int ac, char **av)
{
    var_t var;

    ennemy_pid = -1;
    var = init(var);
    change_sig();
    if (ac != 2 && ac != 3)
        return (84);
    if (ac == 2)
        return (two_ac(var, av, ac));
    if (ac == 3)
        return (three_ac(var, av, ac));
    return (0);
}