#include <stdio.h>
#include "asm.h"

int main(int ac, char **av)
{
	int len, ret_write;
	char *str = "helo\n";

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		printf("ft_strlen: [%d]\n", len);	
		printf("ft_write first arg :\n");
		ret_write = ft_write(1, av[1], len);
		printf("\nft_write ret : [%d]\n", ret_write);
	}
	else
	{
		printf("Provide arg.\n");
		return 1;
	}
	//hello();
	return 0;
}
