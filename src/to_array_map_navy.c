/*
** EPITECH PROJECT, 2020
** dipslay_map_navy
** File description:
** display_map_navy
*/

#include "my.h"

int my_get_nbr(char str)
{
    long res = 0;

    res = str - 48;
    return (res);
}

int char_to_int(char str)
{
    int res = 0;

    res = ((str - 16) - 48) * 2;
    return (res);
}

var_t map_to_array_navy(var_t var, int m)
{
    int i = 0;
    int j = 0;
    int line = 8;
    int charact = 17;

    for (int n = 0; j < line; j++) {
        for (i = 0; i < charact; i++) {
            if (j >= my_get_nbr(var.pos[m][3]) - 1 && j <=
            my_get_nbr(var.pos[m][6]) - 1 && i >= char_to_int(var.pos[m][2])
            && i <= char_to_int(var.pos[m][5])) {
                var.map_navy[j][i] = var.pos[m][0];
                i++;
            }
        }
    }
    var.map_navy[j] = NULL;
    return (var);
}