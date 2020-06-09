/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** second_terminal.c
*/

#include "my.h"

int second_terminal(char **av, var_t var)
{
    int pid_main = my_getnbr(av[1]);
    display_pid();
    ennemy_pid = pid_main;
    kill(pid_main, 12);
    my_putstr("successfully connected\n\n");
    game_second(pid_main, var);
}

var_t request_second(var_t maps)
{
    maps.touch = 0;
    my_putstr("waiting for enemy's attack...\n");
    maps = detect_touch(maps);
    maps = touch(maps);
    my_putchar(maps.touch_column + 64);
    my_putchar(maps.touch_line + 48);
    if (maps.touch == 1)
        my_putstr(": hit\n\n");
    else
        my_putstr(": missed\n\n");
    maps = array_game_touch(char_to_int(maps.touch_column + 64),
            maps.touch_line, maps);
    return (maps);
}

int game_second(int pid_main, var_t map)
{
    int result = 0;

    while ((result = end(map)) == 0) {
        my_navy(map);
        map = request_second(map);
        if ((result = end(map)) != 0)
            break;
        map = request_main(map);
    }
    my_navy(map);
    if (result == 2) {
        my_putstr("I won\n");
        return (0);
    } else {
        my_putstr("Enemy won\n");
        return (1);
    }
}