/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "my.h"

int my_navy(var_t var)
{
    my_putstr("my positions:\n");
    display_map_navy(var);
    my_putstr("\nenemy's positions:\n");
    display_map_empty(var);
    return (0);
}