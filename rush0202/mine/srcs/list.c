#include "list.h"

t_list* create_list() {
    t_list* head = (t_list*)malloc(sizeof(t_list));
    head->link = 0;
    return head;
}

t_list* insert_list(t_list* head, char* key, char* value) {
    t_list* ptr = (t_list*)malloc(sizeof(t_list));
    ptr->key = key;
    ptr->value = value;
    ptr->link = head->link;
    head->link = ptr;
    return ptr;
}

char* search_list(t_list* head, char* key) {
    t_list* p = head;
    while (p->link != 0) {
        p = p->link;
		if (strcmp(p->key, key) == 0)
			return p->value;
    }
	return 0;
}

void show_list(t_list* head) {
    t_list* p = head;
    while (p->link != 0) {
        p = p->link;
        printf("\"%s:%s\"\n", p->key, p->value);
    }
}

void free_list(t_list* head) {
    if (head->link != 0) free_list(head->link);
    free(head);
}
