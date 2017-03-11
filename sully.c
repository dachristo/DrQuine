#include <stdio.h>
#include <string.h>

int		ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int main(int argv, char **argc)
{
	if (ft_isdigit(argc[0][strlen(argc[0]) - 3]))
	{
		int i = argc[0][strlen(argc[0]) - 3];
		char str[9] = "Sully";
		str[5] = i;
		str[6] = '.';
		str[7] = 'c';
		str[8] = '\0';
		printf("%s\n", str);
		//int fd = open(, O_WRONLY | O_CREAT);
		//dprintf(
	}
	else
	{
		printf("c'est fini\n");
	}
}
