#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;
	size_t			i;

	i = 0;
	ptr_src = (unsigned char *) src;
	ptr_dst = (unsigned char *) dst;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return dst;
}