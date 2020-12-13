#include <stdio.h>
#define MAX_LENGTH  64
int     main()
{
    int     key = 0;
    int     i = 0;
    char    str[MAX_LENGTH];

    while (1)
    {
        key = getchar();
        if (key == '\n')
            break;
        str[i++] = key;
    }
	str[i] = 0;
	printf("%s\n", str);
	return 0;
}
