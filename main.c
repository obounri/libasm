#include <fcntl.h>
#include <stdio.h>
#include "asm.h"


int main(int ac, char *av[])
{
	int ret_write, len, ret_read;
	char read_buffer[1024];
	char dst[12] = "Hello World!";
	char *src = "Lorem Ipsum";

	if (ac == 2 || ac == 3)
	{
		len = ft_strlen(av[1]);
		printf("FT_STRLEN first arg: [%d]\n", len);	
		printf("FT_WRITE first arg :\n");
		ret_write = ft_write(1, av[1], len);
		printf("\nFT_WRITE RET : [%d]\n", ret_write);
		printf("FT_READ from stdin:\n");
		int fd = 0; 
		if (ac == 3)
			if ((fd = open(av[2], O_RDONLY)) == -1)
				return 1;
		ret_read = ft_read(fd, read_buffer, 1024);
		read_buffer[ret_read] = '\0';
		printf("\noutput(buffer) from fd = %d --> \n------------\n%s\n------------\nret_read = [%d] \n", fd, read_buffer, ret_read);
		printf("FT_STRCPY from src (%s) to dst :\n", src);
		ft_strcpy(dst, src);
		printf("dst is now = [%s]\n", dst);
		printf("FT_STRDUP(src) return is - [%s]\n", ft_strdup(src));
	}
	return 0;
}

