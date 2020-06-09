/*
** EPITECH PROJECT, 2020
** display
** File description:
** display
*/
#include "my.h"

void display_pos(char **to_array_pos)
{
    for (int j = 0; to_array_pos[j] != NULL; j++) {
        my_putstr(to_array_pos[j]);
        my_putchar('\n');
    }
}

void display_map_empty(var_t var)
{
    my_putstr(" |A B C D E F G H\n");
    my_putstr("-+---------------\n");
    for (int j = 0; var.map[j] != NULL; j++) {
        my_putstr(var.map[j]);
        my_putchar('\n');
    }
    my_putchar('\n');
}

void display_map_navy(var_t var)
{
    my_putstr(" |A B C D E F G H\n");
    my_putstr("-+---------------\n");
    for (int j = 0; var.map_navy[j] != NULL; j++) {
        my_putstr(var.map_navy[j]);
        my_putchar('\n');
    }
}