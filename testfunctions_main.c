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

// ft_strlen

int	main(void)
{
	char	*s = {"Hi there"};
	int		len;

	len = ft_strlen(s);
	printf("%d\n", len);
}

// ft_strlcpy

int	main(void)
{
	char	dest[] = "BUFFFFF";
	char	src[] = "Text";

	char	*dest1;
	char	*src1;
	dest1 = &dest[0];
	src1 = &src[0];
	int		size;
	int	print;

	size = 4;
	print = ft_strlcpy(dest1, src1, size);
	printf("%d", print);
}

// ft_strtrim

int	main(void)
{
	char	s1[] = "ABBA";
	char	set[] = "A";
	char	*cpy;

	cpy = ft_strtrim(s1, set);
	printf("%s\n", cpy);
	free(cpy);
	printf("%s\n", cpy);
}

// ft_strjoin

int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = " World!";
	char	*joined;

	joined = ft_strjoin(s1, s2);
	printf("%s\n", joined);
	free(joined);
}

// ft_substr

int	main(void)
{
	char	s1[] = "Hi, hello!";
	char	*substr;

	substr = ft_strjoin(s1, 4, 4);
	printf("%s\n", substr);
	free(substr);
}

// ft_strchr

int	main(void)
{
	char	s[] = "Hallo";
	char	*rv;
	int		character;

	character = 'l';
	rv = ft_strchr(s, character);
	printf("%s", rv);
}

// ft_strrchr

int	main(void)
{
	char	s[] = "Catarina";
	char	*rv;
	int		character;

	character = 'a';
	rv = ft_strrchr(s, character);
	printf("%s", rv);
}

// ft_strncmp

int	main(void)
{
	int	rt;

	rt = ft_strncmp("Hello", "Hela", 4);
	printf("%d\n", rt);
}

// ft_strnstr.c

int	main(void)
{
	char	*rt;

	rt = ft_strnstr("Hello World!", "Wo", 5);
	if (rt[0] == '\0')
		printf("%s\n", "Not part of the string.");
	else
		printf("%s\n", rt);
}

// ft_calloc.c

int	main(void)
{
	char	*dest;

	dest = ft_calloc(1, 5);
	printf("%d\n" "%d\n", dest[2], dest[5]);
	free(dest);
}

// ft_strdup.c

int	main(void)
{
	char	*rt;

	rt = ft_strdup("Hello pls duplicate me.");
	printf("%s\n", rt);
	free(rt);
	printf("%s\n", rt);
}

// ft_itoa.c

int	main(void)
{
	char	*rt;

	rt = ft_itoa(839265);
	printf("%s\n", rt);
	free(rt);
}
