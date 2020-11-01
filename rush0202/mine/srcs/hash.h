#ifndef HASH_H
#define HASH_H
#include <stdio.h>
#include <math.h>
#include "list.h"
#define TABLE_SIZE 10

void create_hash();
t_list* search_hash(char* key);
void show_hash();
void debug_hash();
int hash(char* key);
void free_hash();

#endif
