#include "data.h"

void insert(char* key, char* value) {
	insert_list(search_hash(key), key, value);
}

char* search(char* key) {
	return search_list(search_hash(key), key);
}
