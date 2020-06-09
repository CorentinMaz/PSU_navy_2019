/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** three_ac.c
*/
#include "my.h"

int three_ac(var_t var, char **av, int ac)
{
    int fd = open(av[2], O_RDONLY);
    char *str = NULL;

    if (fd == -1)
        return (84);
    str = str_pos(av[2], fd);
    var.pos = to_array_pos(str);
    if (check_pos(av[2], var, str) == 84) {
        my_putstr("Wrong map format.\n");
        return (84);
    } else if (check_number_pid(av[1]) == 1)
        return (84);
    for (int i = 0; i < 4; i++)
        var = map_to_array_navy(var, i);
    if (count_good_navy(var) == 84)
        return (84);
    return (second_terminal(av, var));
}