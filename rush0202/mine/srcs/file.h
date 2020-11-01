#include <fcntl.h>

#define BUFFSIZE 4096

int file_open(char* file_name);
int file_read_next_line(int fd, char* buf);
int file_close(int fd);
