#include "data.h"
#include "print.h"

int main() {
	char* key=malloc(10);
	char* value=malloc(10);
	char* key2=malloc(10);
	char* value2=malloc(10);
	strcpy(key, "40");
	strcpy(value, "forty");
	strcpy(key2, "2");
	strcpy(value2, "two");
	char* key3=malloc(10);
	char* value3=malloc(10);
	strcpy(key3, "1");
	strcpy(value3, "one");

	create_hash();
	insert(key, value);	
	insert(key2, value2);	
	insert(key3, value3);	
	show_hash();

	printf("==========\n");
	char arg[] = "42";
	print(arg);	

	free_hash();
	free(key);
	free(value);
}
