#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	i;
	int	a = -1;

	i = ft_printf("test %x\n", a);
	printf("%i\n", i);
	i = ft_printf("test %X\n", a);
	printf("%i\n", i);
	i = printf("test %x\n", a);
	printf("%d\n", i);
	i = printf("test %X\n", a);
	printf("%d\n", i);
}
