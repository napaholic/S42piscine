#ifndef PRINT_LIST_H
#define PRINT_LIST_H

typedef struct		s_print_list
{
	char			*str;
	struct s_print_list	*link;
}					t_print_list;

void create_print_list();
void insert_print_list(char* str);
void show_print_list();

#endif
