#include"sastantua.c"
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int main()
{
	sastantua(-1);
	sastantua(0);
	sastantua(1);
	sastantua(2);
	sastantua(3);
	sastantua(4);
	sastantua(30);

	return(0);
}




