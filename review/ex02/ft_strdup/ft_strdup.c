#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(*str) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

int main()
{
	char* src = "Hello";
	char*dup = ft_strdup(src);
	printf("%s", dup);

	char*dup2 = ft_strdup(dup);

	printf("%s", dup2);
}
