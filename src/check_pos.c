/*
** EPITECH PROJECT, 2020
** position
** File description:
** position
*/
#include "my.h"

int check_error_pos(char **pos)
{
    for (int i = 0; pos[i] != NULL; i++) {
        if (check_charact(pos[i][2]) == 84 || check_charact(pos[i][5]) == 84 ||
            check_num(pos[i][3]) == 84 || check_num(pos[i][6]) == 84)
            return (84);
    }
    for (int i = 0; pos[i] != NULL; i++) {
        if (pos[i][2] != pos[i][5] && pos[i][3] != pos[i][6])
            return (84);
        if (check_num_nav(pos) == 84)
            return (84);
    }
    return (0);
}

int check_error(char **pos)
{
    int i = 0;
    int j = 0;

    if (pos[0][0] != '2' || pos[1][0] != '3' || pos[2][0] != '4' ||
        pos[3][0] != '5')
        return (84);
    if (pos[0][1] != ':' || pos[1][1] != ':' || pos[2][1] != ':' ||
        pos[3][1] != ':')
        return (84);
    if (pos[0][4] != ':' || pos[1][4] != ':' || pos[2][4] != ':' ||
        pos[3][4] != ':')
        return (84);
    if (check_error_pos(pos) == 84)
        return (84);
    return (0);
}

int check_pos(char *av, var_t var, char *str)
{
    if (nb_line(str) == 84 || nb_charact(str) == 84)
        return (84);
    if (str == NULL)
        return (84);
    var.pos = to_array_pos(str);
    if (nb_line(str) == 84 || nb_charact(str) == 84)
        return (84);
    if (check_error(var.pos) == 84)
        return (84);
    return (0);
}