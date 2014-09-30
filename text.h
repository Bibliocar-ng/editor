#ifndef TEXT_H
#define TEXT_H

#include <stdio.h>
#include <stdlib.h> // declared in line.h
#include <ctype.h>
#include <string.h> // declared in line.h
#include <ncurses.h> // -lncurses. declared in page.h

#include "page.h"

void update_status(char *info);

int count_lines(int argc, char **argv);
void load_file(int argc, char **argv, PAGE *p);
void save_file(int argc, char **argv, PAGE *p);

void move_left(int *x, int *y);
void move_right(PAGE *p, int *x, int *y);
void move_up(PAGE *p, int *x, int *y);
void move_down(PAGE *p, int *x, int *y);


#endif

