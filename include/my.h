/*
** EPITECH PROJECT, 2020
** my
** File description:
** my
*/
#ifndef MY_H_
#define MY_H_

#ifndef READ_SIZE
#define READ_SIZE (10)
#endif

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <navy.h>
#include <signal.h>
#include <string.h>

int ennemy_pid;

//lib
int my_getnbr(char const *);
void my_put_nbr(int);
void my_putchar(char);
int my_putstr(char const *str);
int my_strlen(char const *str);

//file/check_pos_error.c
int check_charact(char i);
int check_num(char i);
int check_num_nav(char **pos);

//file/check_pos.c
int check_pos(char *av, var_t var, char *str);
char *str_pos(char *av, int fd);
char **to_array_pos(char *str_pos);

//file/display_to_array.c
void display_map_empty(var_t var);
void display_map_navy(var_t var);
void display_pos(char **to_array_pos);

// file/display_map_navy.c
int my_get_nbr(char str);
int char_to_int(char str);
var_t map_to_array_navy(var_t var, int m);

//file/display_to_array.c
void display_map_empty(var_t var);
void display_map_navy(var_t var);
void display_pos(char **to_array_pos);

//file/end.c
int detect_enemy_end(var_t var);
int end(var_t var);

//file/game.c
var_t array_game(int col, int lign, var_t var);
var_t array_game_touch(int col, int lign, var_t var);

//file/get_next_line.c
char *my_strcat(char *dest, char const *src);
int detect_end(char *str);
char *memory(char *line);
char *get_next_line(int fd);

//file/main_terminal.c
int main_terminal(var_t maps);
var_t request_main(var_t maps);
int game_main(var_t maps);

//file/main.c
var_t init(var_t var);
int check_number_pid(char *pid);
int make_help(int ac, char **av);
int main(int ac, char **av);

//file/navy.c
int my_navy(var_t var);

//file/second_terminal.c
int second_terminal(char **av, var_t var);
var_t request_second(var_t maps);
int game_second(int pid_main, var_t var);

//three_ac.c
int three_ac(var_t var, char **av, int ac);

//file/to_array_map_navy.c
int my_get_nbr(char str);
int char_to_int(char str);
var_t map_to_array_navy(var_t var, int m);

//file/to_array_navy.c
char **to_array_next(char **buffer_two, int i, int j);
char **map_to_array(void);

//file/to_array_pos.c
int nb_line(char *str_pos);
int nb_charact(char *str_pos);
char **to_array_pos(char *str_pos);

//file/tool_pid.c
void display_pid(void);
void change_pid(int sig, siginfo_t *info, void *context);
void change_sig(void);

//file/tool_player.c
var_t check_input(char *str, var_t maps);
void signal_input(char *str);
var_t detect_touch(var_t map);
var_t touch(var_t map);
int hit(void);

//file/two_ac.c
int count_good_navy(var_t var);
int two_ac(var_t var, char **av, int ac);

#endif