/*
** EPITECH PROJECT, 2020
** two_ac
** File description:
** two_ac
*/

#include "my.h"

int count_good_navy(var_t var)
{
    int j = 0;
    int count = 0;

    for (int n = 0; j < 8; j++) {
        for (int i = 0; i < 17; i++) {
            if (var.map_navy[j][i] >= '1' && var.map_navy[j][i] <= '8')
                count++;
        }
    }
    if (count != 22) {
        my_putstr("Wrong map format.\n");
        return (84);
    }
    return (0);
}

int two_ac(var_t var, char **av, int ac)
{
    int fd = open(av[1], O_RDONLY);
    char *str = NULL;

    if (fd == -1)
        return (84);
    str = str_pos(av[1], fd);
    if (make_help(ac, av) == 84)
            return (0);
    var.pos = to_array_pos(str);
    if (check_pos(av[1], var, str) == 84) {
        my_putstr("Wrong map format.\n");
        return (84);
    }
    for (int i = 0; i < 4; i++)
        var = map_to_array_navy(var, i);
    if (count_good_navy(var) == 84)
        return (84);
    return (main_terminal(var));
}
