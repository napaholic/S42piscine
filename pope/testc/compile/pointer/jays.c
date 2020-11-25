#include <stdio.h>

int             main(int argc, char *argv[])
{
        int             d_2_array[5][10];
        int             **p_d_2_array;
        p_d_2_array = d_2_array;

        for (int y = 0; y < 5; y++)
                for (int x = 0; x < 10; x++)
                        d_2_array[y][x] = y * 10 + x;

        // 초기 값
        printf("d_2_array               = %llu\n", d_2_array);
        printf("p_d_2_array             = %llu\n", p_d_2_array);

        // 연산이 일어난 경우
        printf("--------------------------\n");
        printf("d_2_array + 1           = %llu\n", d_2_array + 1);
        printf("sz d_2_array + 1        = %llu\n", sizeof(d_2_array + 1));
        printf("p_d_2_array + 1         = %llu\n", p_d_2_array + 1);
        printf("sz p_d_2_array + 1      = %llu\n", sizeof(p_d_2_array + 1));

        // 가리키는 값 1
        printf("--------------------------\n");
        printf("*(d_2_array + 1)        = %llu\n", *(d_2_array + 1));
        printf("sz *(d_2_array + 1)     = %llu\n", sizeof(*(d_2_array + 1)));
        printf("*(p_d_2_array + 1)      = %d\n", *(p_d_2_array + 1));
        printf("sz *(p_d_2_array + 1)   = %llu\n", sizeof(*(p_d_2_array + 1)));

        // 가리키는 값 2
        printf("--------------------------\n");
        printf("**(d_2_array + 1)       = %d\n", **(d_2_array + 1));
        printf("**(p_d_2_array + 1)     = %d\n", **(p_d_2_array + 1)); // ERROR!!!
}
