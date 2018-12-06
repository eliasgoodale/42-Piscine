#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void	ft_putchar(char glyph);
char	*ft_strrev(char *str);

int main ()
{
	char test1[] = "asdf";
	printf("%s\n", ft_strrev(test1));
	char test2[] = "qwert";
	printf("%s\n", ft_strrev(test2));
	char test3[] = "z";
	printf("%s\n", ft_strrev(test3));
	char test4[] = "bc";
	printf("%s\n", ft_strrev(test4));
}




char	*ft_strrev(char *str)
{
	int		count;
	int		size;
	char	temp;

	count = 0;
	size = 0;
	while (str[size])
		size++;


	while (count < size)
	{
		temp = str[size];
		str[size] = str[count];
		str[count] = temp;
		count++;
		size--;
	}
	return (str);
}
void	ft_putchar(char glyph)
{
	write(1,&glyph,1);
}
