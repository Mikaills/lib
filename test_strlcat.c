unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;

	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (size <= dest_size)
		return (size + src_size);
	i = 0;
	while (src[i] != '\0' && (dest_size + i) < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}
#include <stdio.h>
int main()

{
	printf("%d", ft_strlcat("deneme", "deneme", 10));
}
