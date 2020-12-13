#include <stdio.h>
#include <string.h>

char    *mystrtok(char *str, const char *delims)
{
	static  char    *current;
	char			*pDelims;
	int				flag;
	if (str != NULL)
		current = str;
	else
		str = current;
	if (*current == '\0')
		return NULL;

	while (*current)
	{
		pDelims = (char *)delims;
		flag = 0;
		while (*pDelims)
		{
			if (*current == *pDelims)
			{
				*current = '\0';
				++current;
				flag = 1;
			}
			++pDelims;
		}
		if (flag)
			return str;
		++current;
	}
	return str;
}
// 5분드립니다.
int     main    (void)
{
	char		msg[]		= "Hi, there. Hello, Bye";
	char		msg2[]		= "Hi, there. Hello, Bye";
	const char	*delims		= ",. ";
	const char	*delims2	= ",. ";
	char		*token		= mystrtok(msg, delims);
	char		*token2		= strtok(msg2, delims2);
	printf("msg2's address = %p\n", msg2);
	printf("msg's address = %p\n", msg);
	printf("=-==================================\n");
	printf("%p\n", token2);
	printf("=%s=\n", token2);
	printf("===================================\n");
	while (token != NULL)
	{
		printf("origin's address = %p\n", token2);
		printf("myin's address = %p\n", token);
		printf("my     : %s\n", token);
		printf("origin : %s\n", token2);
		token = mystrtok(NULL, delims);
		token2 = strtok(NULL, delims2);
	}
	printf("--------------------\n");
}
