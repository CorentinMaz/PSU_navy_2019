/*
** EPITECH PROJECT, 2020
** to_array_navy
** File description:
** to_array_navy
*/
#include "my.h"

char **to_array_next(char **buffer_two, int i, int j)
{
    if (j >= 0 && i > 1 && i != 3 && i != 5 && i != 7 && i != 9
        && i != 11 && i != 13 && i != 15) {
        buffer_two[j][i] = '.';
    } else if (i == 1)
        buffer_two[j][i] = '|';
    else
        buffer_two[j][i] = ' ';
    return (buffer_two);
}

char **map_to_array(void)
{
    int i = 0;
    int j = 0;
    int line = 8;
    int charact = 17;
    char **buffer_two = malloc(sizeof(char *) * (line + 1));

    for (int n = 0; j < line; j++) {
        buffer_two[j] = malloc(sizeof(char) * (charact + 1));
        for (i = 0; i < charact; i++) {
            if (j >= 0 && i == 0) {
                buffer_two[j][i] = '1' + n;
                n++;
            } else
                to_array_next(buffer_two, i, j);
        }
        buffer_two[j][i] = '\0';
    }
    buffer_two[j] = NULL;
    return (buffer_two);
}