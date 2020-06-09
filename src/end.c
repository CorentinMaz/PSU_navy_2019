/*
** EPITECH PROJECT, 2020
** end
** File description:
** end
*/

#include "my.h"

int detect_enemy_end(var_t var)
{
    int cross = 0;

    for (int i = 0; var.map[i] != NULL; i++)
        for (int j = 2; var.map[i][j] != '\0'; j++)
            if (var.map[i][j] == 'x')
                cross++;
    if (cross == 14)
        return (2);
    return (0);
}

int end(var_t var)
{
    int count = 0;

    for (int i = 0; var.map_navy[i] != NULL; i++)
        for (int j = 2; var.map_navy[i][j] != '\0'; j++)
            if (var.map_navy[i][j] >= '2' && var.map_navy[i][j] <= '5')
                count++;
    if (count == 0)
        return (1);
    else
        return (detect_enemy_end(var));
}