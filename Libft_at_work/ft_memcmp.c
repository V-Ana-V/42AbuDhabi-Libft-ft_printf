#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_uc;
	unsigned char	*s2_uc;

	i = 0;
	s1_uc = (unsigned char *) s1;
	s2_uc = (unsigned char *) s2;
	while (i < n)
	{
		if (s1_uc[i] != s2_uc[i])
			return (s1_uc[i] - s2_uc[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	int		s1[1];
	int		s2[1];
	int		n;
	size_t	i;
	int		result;
	int		result_o;

	n = 4;
	i = 0;
	s1[0] = 1;
	s2[0] = 1;
	result = ft_memcmp(s1, s2, n);
	result_o = memcmp(s1, s2, n);
	printf("Bytes in the array s1: ");
	while (i < sizeof(s1[0]))
	{
		printf("%02x ", ((unsigned char *)s1)[i]);
		i++;
	}
	printf("\n");
	printf("Bytes in the array s2: ");
	i = 0;
	while (i < sizeof(s2[0]))
	{
		printf("%02x ", ((unsigned char *)s2)[i]);
		i++;
	}
	printf("\n");
	printf("My function returns %d\n", result);
	printf("Original function returns %d\n", result_o);
	return 0;
}
*/