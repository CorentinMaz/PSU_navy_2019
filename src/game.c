/*
** EPITECH PROJECT, 2020
** game
** File description:
** game
*/

#include "my.h"

var_t array_game(int col, int lign, var_t var)
{
    if (var.touch == 0) {
        var.map[lign - 1][col] = 'o';
        my_putstr(": missed\n\n");
    } else {
        var.map[lign - 1][col] = 'x';
        my_putstr(": hit\n\n");
    }
    return (var);
}

var_t array_game_touch(int col, int lign, var_t var)
{
    if (var.touch == 0)
        var.map_navy[lign - 1][col] = 'o';
    else
        var.map_navy[lign - 1][col] = 'x';
    return (var);
}