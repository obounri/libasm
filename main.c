#include <fcntl.h>
#include <stdio.h>
#include "asm.h"

int main(int ac, char **av)
{
	int len, ret_write, ret_read;
	char *str = "helo\n", read_buffer[256];

	if (ac == 2 || ac == 3)
	{
		len = ft_strlen(av[1]);
		printf("ft_strlen: [%d]\n", len);	
		printf("ft_write first arg :\n");
		ret_write = ft_write(1, av[1], len);
		printf("\nft_write ret : [%d]\n\n", ret_write);
		printf("ft_read(\"test\", buffer, n) from stdin:\n");
		int fd = 0; 
		if (ac == 3)
			if ((fd = open(av[2], O_RDONLY)) == -1)
				return 1;
		ret_read = ft_read(fd, read_buffer, 255);
		read_buffer[ret_read] = '\0';
		printf("output(buffer) from fd = %d--> [%s] \nret_read = [%d] \n", fd, read_buffer, ret_read);

	}
	//hello();
	return 0;
}
