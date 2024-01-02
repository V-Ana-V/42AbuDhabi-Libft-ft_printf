#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (count && SIZE_MAX / count < size)
		return NULL;
	ptr = malloc(count * size);
	if (!ptr)
		return NULL;
	while (i < count * size)
	{
		((unsigned char *) ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main(void)
{
	void	*ptr_o;
	void	*ptr;

	ptr_o = calloc(0, 1);
	ptr = ft_calloc(0, 1);
	printf("Original function returns: %p\n", ptr_o);
	printf("My function returns: %p\n", ptr);
	free(ptr_o);
	free(ptr);
}
*/