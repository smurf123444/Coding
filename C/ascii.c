#include <stdio.h>


void cm_putchar(char c)
{
	write(1, &c, 1);
}

int cm_putstr(char *str) //cm_putstr(parameter)
{
	int i = 0;
	while (str[i] != '\0')
	{
		cm_putchar(str[i++]);
	}
	return (i);
}

int main()
{
	cm_putstr("hey");
	
	return (0);
}
