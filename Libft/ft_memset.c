#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char			c_char;
	unsigned char	*ptr;
	int				i;

	i = 0;
	c_char = (unsigned char) c;
	ptr = (unsigned char *) b;
	while (i < len)
	{
		ptr[i] = c_char;
		i++;
	}
	return (b);
}
/*
int main(void)
{
	void			*ptr;
	void			*ptr1;
	int				i;
	unsigned char	*bytePtr;
	unsigned char	*bytePtr1;

	i = 0;
	ptr = malloc(sizeof(int));
	ptr1 = malloc(sizeof(int));
	ft_memset(ptr, 321, 2);
	memset(ptr1, 321, 2);
	bytePtr = (unsigned char *) ptr;
	bytePtr1 = (unsigned char *) ptr1;

    // Print each byte of the int
	printf("My function:\n");
    for (size_t i = 0; i < sizeof(int); ++i) {
        printf("%u ", bytePtr[i]);
    }
	printf("\nOriginal:\n");
	for (size_t i = 0; i < sizeof(int); ++i) {
        printf("%u ", bytePtr1[i]);
    }
	free(ptr);
	free(ptr1);
	return (0);
}
*/