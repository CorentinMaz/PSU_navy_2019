/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** main_terminal.c
*/

#include "my.h"

int main_terminal(var_t maps)
{
    display_pid();
    my_putstr("waiting for enemy connection...\n\n");
    pause();
    my_putstr("enemy connected\n\n");
    game_main(maps);
}

var_t request_main(var_t maps)
{
    char *str = "\0";

    maps.touch = 0;
    my_putstr("attack: ");
    str = get_next_line(0);
    check_input(str, maps);
    signal_input(str);
    my_putstr(str);
    maps.touch = hit();
    maps = array_game(char_to_int(str[0]), my_get_nbr(str[1]), maps);
    free(str);
    return (maps);
}

int game_main(var_t maps)
{
    int result = 0;

    my_navy(maps);
    while ((result = end(maps)) == 0) {
        maps = request_main(maps);
        if ((result = end(maps)) != 0)
            break;
        my_navy(maps);
        maps = request_second(maps);
    }
    if (result == 2) {
        my_putstr("I won\n");
        return (0);
    } else {
        my_putstr("Enemy won\n");
        return (1);
    }
}