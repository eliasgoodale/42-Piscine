#include <stdio.h>
#include <stdlib.h>

void	factor_prime(char * str)
{
	int div = 2;
	int nb = atoi(str);
	if (nb == 1)
		printf("%d", nb);
	if (nb <= 1)
		return ;
	while (div <=  nb)
	{
		if (nb % div == 0)
		{
			printf("%d", div);
			
			if (nb == div)
				return ;
			printf("*");
			nb = nb / div;
			div = 1;
		}
		div++;
	}
}
int main(int argc, char **argv)
{
	if (argc == 2)
		factor_prime(argv[1]);
	printf("\n");
	return (0);
}
