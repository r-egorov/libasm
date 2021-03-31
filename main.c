#include <stdio.h>

int		ft_strlen(char *str);

// nasm -fmacho64 ft_strlen.asm && gcc main.c -c && gcc main.o ft_strlen.o

int		main(void)
{
	char *str = "string";
	int		res;

	printf("%d\n", ft_strlen("A STRING WITH 15"));
	printf("%d\n", ft_strlen(str));
}
