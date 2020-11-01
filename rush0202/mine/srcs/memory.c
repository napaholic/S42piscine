#include "memory.h"

t_memlist	*g_mem;

int	ft_malloc_init() {
    t_mem_list* head;
	if (!(head = (t_mem_list*)malloc(sizeof(t_mem_list))))
		return 0;
	head->mem = 0;
    head->link = 0;
	return 1;
}

void *ft_malloc(int size) {
    t_mem_list* ptr;
    if (!(ptr = (t_mem_list*)malloc(sizeof(t_mem_list))))
	{
		ft_free(g_mem);
		return 0;
	}
    ptr->link = head->link;
    head->link = ptr;
	if (!(ptr->mem = malloc(size)))
	{
		ft_free(g_mem);
		return 0;
	}
    return ptr->mem;
}

void show_mem_list(t_mem_list* head) {
    t_mem_list* p = head;
    while (p->link != 0) {
        p = p->link;
        printf("\"%p:%p\"\n", p, p->mem);
    }
}

void ft_free(t_mem_list* head) {
    if (head->link != 0) ft_free(head->link);
	if (head->mem)
		free(head->mem);
    free(head);
}
