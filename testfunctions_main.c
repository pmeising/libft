// ft_mem...

// ft_memset

void	main(void)
{
	int	buffer[4];

	buffer[0] = 65;
	buffer[1] = 65;
	buffer[2] = 65;
	write(1, (char *)buffer, 10);
	write(1, "\n", 1);
	ft_memset(buffer, 'B', 4);
	write(1, (char *)buffer, 3);
	write(1, "\n", 1);
}

// ft_memchr.c
void	main(void)
{
	char	*str = {"Hello"};
	char	*pointer;

	pointer = (char *) ft_memchr(str, 108, 6);
	printf("%s\n", str);
	printf("%s\n", pointer);
}