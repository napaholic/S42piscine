#include "hash.h"

int hash_usage[TABLE_SIZE];
t_list* hash_table[TABLE_SIZE];

void	create_hash()
{
	int i;

	i = -1;
	while (++i < TABLE_SIZE)
		hash_table[i] = create_list();
}

t_list* search_hash(char* key) {
    return hash_table[hash(key)];
}

void show_hash() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("hash[%d, %p]:\n", i, &hash_table[i]);
        show_list(hash_table[i]);
    }
}

void debug_hash() {
    int min = 999999999, max = 0;
    double sum = 0, mean, vsum = 0, std;
    for (int i = 0; i < TABLE_SIZE; i++) {
        sum += hash_usage[i];
        if (min > hash_usage[i]) min = hash_usage[i];
        if (max < hash_usage[i]) max = hash_usage[i];
    }
    mean = sum / TABLE_SIZE;

    for (int i = 0; i < TABLE_SIZE; i++) {
        vsum += (hash_usage[i] - mean) * (hash_usage[i] - mean);
    }
    std = sqrt(vsum / TABLE_SIZE);
    printf("min : %d , max : %d, mean : %lf, std : %lf", min, max, mean, std);
}

int hash(char* key) {
    // folding + division 해시 함수
    int num = 0;
    while (*key) num += *key++;

    // mid-square + Pseudo-Random + division 해시 함수
    //int len = strlen(key);
    //int num = 0;
    //for (int i = 0 % len; i <= 5 % len; i++) num += key[i] * 1321 + 3322;

    // Boundary Folding + division 해시 함수
    //int num = 0, rev = 0;
    //while (*key) {
            //if (rev) num += (*key / 10) + (*key % 10) * 10;
            //else num += *key;
//
            //*key++;
            //rev = !rev;
    //}

    // Radix-Exchange + divison 해시 함수
    //int num = 0;
    //int i = strlen(key) - 1;
    //int j;
    //while (*key) {
        //j = *key++ * pow(3, i--);
        //if (j > 0) num += j;  // overflow가 발생함을 예방
    //}

    return num % TABLE_SIZE;
}

void free_hash() {
	int i;;
	
	i = -1;
	while (++i < TABLE_SIZE)
		free_list(hash_table[i]);
}
