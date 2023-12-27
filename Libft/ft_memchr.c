#include <stdio.h>
#include <stddef.h>
//#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char   ch;
	unsigned char   *s_byte;
	size_t          i;

	i = 0;
	ch = (unsigned char) c;
	s_byte = (unsigned char *) s;
	while (i < n)
	{
		if (s_byte[i] == ch)
			return(s_byte + i);
		i++;
	}
	return NULL;
}
/*
int main()
{
	int				array[1];
	int				c;
	int				c1;
	size_t			i;
	unsigned char	*result;
	unsigned char	*result_o;

	array[0] = 321;
	c = 65;
	c1 = 321;
	i = 0;
	result = (unsigned char *) ft_memchr(array, c, 4);
	result_o = (unsigned char *) memchr(array, c, 4);
	// Print each byte of the integer
	printf("Bytes in the array: ");
	while (i < sizeof(array[0]))
	{
		printf("%02x ", ((unsigned char *)array)[i]);
		i++;
	}
	printf("\n");
	// Check and print results for ft_memchr
	if (result != NULL) {
		printf("ft_memchr - Found the value %d in the array.\nThe result pointer is %p\n", c, result);
		printf("ft_memchr - Pointing to byte: %02x\n", *result);
	} else {
		printf("ft_memchr - Value not found in the array.\n");
	}
	// Check and print results for memchr
	if (result_o != NULL) {
		printf("memchr - Found the value %d in the array.\nThe result pointer is %p\n", c, result_o);
		printf("memchr - Pointing to byte: %02x\n", *result_o);
	} else {
		printf("memchr - Value not found in the array.\n");
	}
	// Check and print results for ft_memchr
	if (result != NULL) {
		printf("ft_memchr - Found the value %d in the array.\nThe result pointer is %p\n", c1, result);
		printf("ft_memchr - Pointing to byte: %02x\n", *result);
	} else {
		printf("ft_memchr - Value not found in the array.\n");
	}
	// Check and print results for memchr
	if (result_o != NULL) {
		printf("memchr - Found the value %d in the array.\nThe result pointer is %p\n", c1, result_o);
		printf("memchr - Pointing to byte: %02x\n", *result_o);
	} else {
		printf("memchr - Value not found in the array.\n");
	}

	return 0;
}
*/