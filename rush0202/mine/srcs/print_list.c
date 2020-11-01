#include "print_list.h"
#include <stdlib.h>
#include <stdio.h>

t_print_list	*g_print_list_head;

void create_print_list() {
    g_print_list_head = (t_print_list*)malloc(sizeof(t_print_list));
    g_print_list_head->link = 0;
}

void insert_print_list(char* str) {
	printf("insert : %s\n", str);
    t_print_list* ptr = (t_print_list*)malloc(sizeof(t_print_list));
    ptr->str = str;
    ptr->link = g_print_list_head->link;
    g_print_list_head->link = ptr;
}

void show_print_list() {
    t_print_list* p = g_print_list_head;
    while (p->link != 0) {
        p = p->link;
        printf("p : \"%s\"\n", p->str);
    }
}
