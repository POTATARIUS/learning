#ifndef INCLUDED_FUNCTIONS_H
#define INCLUDED_FUNCTIONS_H

#include <stdio.h>   // стандарт input\output
#include <string.h> // библиотека для работ со строками
#include <stdlib.h>
#include <time.h>

#include "functions.c"

int battle(int player_gold);
int hello(char *nickname, int buffer_size);
int tavern(int player_gold);

#endif