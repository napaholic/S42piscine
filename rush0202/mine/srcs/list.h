#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct		s_list
{
	char			*key;
	char			*value;
	struct s_list	*link;
}					t_list;

t_list *create_list();
t_list* insert_list(t_list* head, char* key, char* value);
char* search_list(t_list* head, char* key);
void show_list(t_list* head);
void free_list(t_list* head);

#endif
