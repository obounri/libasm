#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include "asm.h"


int main(int ac, char *av[])
{
	int ret_write, len, ret_read;
	char read_buffer[1024];
	char dst[12] = "Hello World!";
	char *src = "Lorem IPSUM";
	char *to_dup = "This is the duplicated string";

	if (ac == 2 || ac == 3)
	{
		len = ft_strlen(av[1]);
		printf("FT_STRLEN first arg: [%d]\n\n", len);	
		printf("FT_WRITE first arg :\n");
		ret_write = ft_write(1, av[1], len);
		printf("\nFT_WRITE RET : [%d]\n\n", ret_write);
		printf("FT_READ from stdin:\n");
		int fd = 0; 
		if (ac == 3)
			if ((fd = open(av[2], O_RDONLY)) == -1)
				return 1;
		ret_read = ft_read(fd, read_buffer, 1024);
		read_buffer[ret_read] = '\0';
		printf("\noutput(buffer) from fd = %d --> \n------------\n%s\n------------\nret_read = [%d] \n\n", fd, read_buffer, ret_read);
		printf("FT_STRCPY from src (%s) to dst :\n", src);
		ft_strcpy(dst, src);
		printf("dst is now = [%s]\n\n", dst);
		printf("FT_STRDUP(to_dup) return is - [%s]\n", ft_strdup(to_dup));
	}

	printf("\n----------------- Syscalls Error Handling -----------------\n");

	printf("Read return: %zd\n", ft_read(15, "wrong file descriptor", 3));
    printf("Error code: %d\n", errno);
	perror("perror printed this");

	printf("\n\n");

	printf("Write return: %zd\n", ft_write(1, "wrong file descriptor", -12));
    printf("Error code: %d\n", errno);
	perror("perror printed this");

	return 0;
}

