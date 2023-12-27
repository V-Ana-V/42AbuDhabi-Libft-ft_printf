#include <stdio.h>

static int	overlap(unsigned char *src, unsigned char *dst, size_t len)
{
	size_t	i;
	size_t	j;
	int		diff;

	diff = 0;
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (src + i == dst + j)
				diff = i - j;
			j++;
		}
		i++;
	}
	return (diff);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	int				diff;
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;

	ptr_src = (unsigned char *) src;
	ptr_dst = (unsigned char *) dst;
	diff = overlap(ptr_src, ptr_dst, len);
	if (diff <= 0)
	{
		i = 0;
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			ptr_dst[len - 1 - i] = ptr_src[len - 1 - i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	*src;
	char	*dst;
	char	arr[7];
	char	*result;
	int		i;

	i = 0;
	while (i < 6)
	{
		arr[i] = 'a' + i;
		i++;
	}
	arr[6] = '\0';
	src = arr;
	dst = src + 2;
	printf("The source: %s\n", src);
	printf("The destination: %s\n", dst);
	result = (char *)ft_memmove(dst, src, 4);
	printf("The result: %s\n", result);
}
*/