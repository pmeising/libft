// ft_memmove.c

void	main(void)
{
	const char    source[] = "Hello!";
    char        dest[] = "BUFFER";
	char		*pointer_to_dest;

	printf("%s\n", source);
	printf("%s\n", dest);
	pointer_to_dest = ft_memmove(dest, source, 1);
	printf("%s\n", pointer_to_dest);
}

// ft_memcpy.c

void	main(void)
{
	const char    source[] = "Hello!";
    char        dest[] = "BUFFER";
	char		*pointer_to_dest;

	printf("%s\n", source);
	printf("%s\n", dest);
	pointer_to_dest = ft_memcpy(dest, source, 4);
	printf("%s\n", pointer_to_dest);
}

// ft_memset.c

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

// ft_memcmp.c
void	main(void)
{
	char	*s1 = {"Hello"};
	char	*s2 = {"Hell!"};
	int		returnvalue;

	returnvalue = ft_memcmp(s1, s2, 5);
	printf("%d\n", returnvalue);
}

// ft_putstr_fd.c

void	main(void)
{
	char	*s = {"Hello World!\n"};
	int		fd;

	fd = 1;
	ft_putstr_fd(s, fd);
}

// ft_putchar_fd

void	main(void)
{
	char	c;
	int		fd;

	fd = 1;
	c = 'A';
	ft_putchar_fd(c, fd);
}

// ft_putnbr_fd

void	main(void)
{
	int	n;
	int	fd;

	fd = 1;
	n = 0;
	ft_putnbr_fd(n, fd);
}

// ft_putendl_fd

void	main(void)
{
	char	*s = {"Hello World!"};
	int		fd;

	fd = 1;
	ft_putendl_fd(s, fd);
}

// ft_atoi.c

int	main(void)
{
	char	s[] = "-2147483648";
	int		i;

	i = ft_atoi(s);
	printf("%d\n", i);
}
