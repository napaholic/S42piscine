#include "indexing.h"

/*
** parse key and value
** Return : if error 0, if success 1
*/


char		*ft_strdup(char *src)
{
	char	*copy;
	char	*temp;

	temp = src;
	while (*temp)
		++temp;
	copy = (char *)malloc((unsigned int)(temp - src) + 1);
	if (!copy)
		return (0);
	while ((*copy++ = *src++))
		;
	*copy = '\0';
	return (copy);
}

int parsing_key(char* start, char** key){
	char *ptr;
	char *end;

	if (!*start) //if : is first
		return 0;
	ptr = start;
	while(*ptr) {
		if (*ptr == ' ')
			break;
		if (!('0' <= <= '9'))
			return 0;
		ptr++;
	}
	end = ptr;
	while(*ptr)
		if (*ptr != ' ')
			return 0;
	*end = '\0'
	*key = ft_strdup(start);
}

int parsing_value(char* start, char** value) {
	while (*start == ' ')
		start++;
	if (*start == '\0')
		return 0;
	*value = ft_strdup(start);
}

int parsing(char* str, char** key, char** value) {
    char* start;

    start = str;
    while (*str) {
		if (*str == ':') {
			*str = '\0';
			if (!parsing_key(start, key))
				return 0;
			if (!parsing_value(str + 1, value))
				return 0;
			return 1;
		}
		str++;
    }
	return 0;
}

int indexing(char* file_name) {
    int nr;
    int fd;
    char buf[BUFFSIZE];
    char* key;
    char* value;
    if ((fd = file_open(file_name)) == -1)
		return 0;
    while ((nr = file_read_next_line(fd, buf)) != 0) {
        if (nr == -1)
			return 0;
        if (!parsing(buf, &key, &value))
			return 0;
        if (!insert(key, value))
			return 0;
    }
    if (file_close(fd) == -1)
	    return 0;
    return 1;
}
