/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** get_next_line.c
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    char *final = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src)) + 1);
    int i = 0;

    if (final == NULL)
        return (NULL);
    for (i; dest[i] != '\0'; i++)
        final[i] = dest[i];
    for (int j = 0; src[j] != '\0'; j++, i++)
        final[i] = src[j];
    final[i] = '\0';
    return (final);
}

int detect_end(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '\n')
            return (1);
    return (0);
}

char *memory(char *line)
{
    int k = 0;
    int l = 0;

    for (k = 0; line[k - 1] != '\n'; k++);
    for (l = 0; line[k] != '\0'; l++)
        line[l] = line[k++];
    for (; l < READ_SIZE + 1; l++)
        line[l] = '\0';
    return (line);
}

char *get_next_line(int fd)
{
    static char line[READ_SIZE + 1];
    char *str = my_strcat("\0", line);
    int i = 0;

    if (fd == -1 || READ_SIZE == 0 || str == NULL)
        return (NULL);
    while (detect_end(str) == 0) {
        i = read(fd, line, READ_SIZE);
        if (i == 0 || i == -1)
            return (NULL);
        str = my_strcat(str, line);
        if (str == NULL)
            return (NULL);
        line[READ_SIZE] = '\0';
    }
    for (i = 0; str[i] != '\n' && str[i] != '\0'; i++);
    str[i] = '\0';
    line[READ_SIZE + 1] = memory(line);
    return (str);
}