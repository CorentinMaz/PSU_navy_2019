/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** tool_player.c
*/

#include "my.h"

var_t check_input(char *str, var_t maps)
{
    if (my_strlen(str) != 2) {
        my_putstr("wrong position\n");
        return (request_main(maps));
    }
    if ((str[0] < 65 || str[0] > 72) || (str[1] < 49 || str[1] > 56)) {
        my_putstr("wrong position\n");
        return (request_main(maps));
    }
}

void signal_input(char *str)
{
    int column = str[0] - 65;
    int line = str[1] - 48;

    for (int i = 0; i != column; i++) {
        kill(ennemy_pid, 10);
        usleep(2000);
    }
    kill(ennemy_pid, 12);
    usleep(2000);
    for (int j = 0; j != line; j++) {
        kill(ennemy_pid, 10);
        usleep(2000);
    }
    kill(ennemy_pid, 12);
    usleep(2000);
}

var_t detect_touch(var_t map)
{
    map.touch_line = 0;
    map.touch_column = 0;
    ennemy_pid = -1;
    for (; ennemy_pid == -1; map.touch_column++) {
        pause();
    }
    usleep(4000);
    for (; ennemy_pid == -1; map.touch_line++) {
        pause();
    }
    return (map);
}

var_t touch(var_t map)
{
    int j = 0;
    int i = 0;

    for (; j < map.touch_line; j++);
    for (; i < map.touch_column; i++);
    j--;
    i = char_to_int(i + 64);
    if (map.map_navy[j][i] >= '2' && map.map_navy[j][i] <= '5') {
        kill(ennemy_pid, 10);
        usleep(2000);
        map.touch = 1;
    }
    kill(ennemy_pid, 10);
    usleep(2000);
    kill(ennemy_pid, 12);
    usleep(2000);
    return (map);
}

int hit(void)
{
    int hit = 0;
    int i = 0;

    ennemy_pid = -1;
    for (; ennemy_pid == -1; i++)
        pause();
    if (i == 2)
        hit = 1;
    return (hit);
}