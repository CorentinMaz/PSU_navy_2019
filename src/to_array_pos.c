/*
** EPITECH PROJECT, 2020
** check_pos
** File description:
** check_pos
*/

#include "my.h"

int nb_charact(char *str_pos)
{
    int i = 0;
    int curs = 0;

    while (str_pos[i] != '\0') {
        if (str_pos[i] == '\n')
            return (curs);
        curs++;
        i++;
    }
    if (curs != 6)
        return (84);
    str_pos[i] = '\0';
    return (curs);
}

int nb_line(char *str_pos)
{
    int i = 0;
    int curs = 0;

    while (str_pos[i] != '\0') {
        if (str_pos[i] == '\n') {
            curs++;
        }
        i++;
    }
    str_pos[i] = '\0';
    if (curs != 4)
        return (84);
    return (curs + 1);
}

char **to_array_pos(char *str_pos)
{
    int i = 0;
    int j = 0;
    int x = 0;
    int line = nb_line(str_pos);
    int charact = nb_charact(str_pos);
    char **to_array_pos = malloc(sizeof(char *) * (line + 1));

    for (; str_pos[x]; x++, j++) {
        to_array_pos[j] = malloc(sizeof(char) * (charact + 1));
        for (i = 0; i < charact; i++, x++) {
            to_array_pos[j][i] = str_pos[x];
        }
        to_array_pos[j][i] = '\0';
    }
    to_array_pos[j] = NULL;
    return (to_array_pos);
}

char *str_pos(char *av, int fd)
{
    struct stat size;
    char *str_pos;

    stat(av, &size);
    str_pos = malloc(sizeof(char) * size.st_size + 1);
    read(fd, str_pos, size.st_size);
    str_pos[size.st_size] = '\0';
    close(fd);
    return (str_pos);
}