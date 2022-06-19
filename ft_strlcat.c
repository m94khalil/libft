#include <libft.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	if (dest == 0 || src == 0)
		return (0);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < (n - i - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (n > 0 && i > 0)
		dest[i + j] = 0;
	return (i);
}
