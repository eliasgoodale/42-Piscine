#include <unistd.h>

void ft_putchar(char glyph)
{
	write(1,&glyph,1);
}	


void ft_is_negative(int n)
{
	n >= 0 ?  ft_putchar('P') : ft_putchar('N');		
}

int main(void)
{
	int n;
	n = -1;
		while( n <= 1)
		{	
			ft_is_negative(n);
			ft_putchar('\n');
			n+=1;
		}	
	ft_is_negative(-0);
}

