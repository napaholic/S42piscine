#ifndef MEMORY_H
#define MEMORY_H
#include <stdlib.h>

typedef struct		s_mem_list
{
	void			*mem;
	struct s_mem_list	*link;
}					t_mem_list;

t_mem_list *ft_malloc_init();
void *ft_malloc(int size, void *mem);
void show_mem_list();
void ft_free();

#endif
