#include "../libft.h"

int	main(void)
{
	char	s1[] = "rrrrrrrrrr";
	char	s2[] = "lorem";
	size_t	len;

	len = ft_strlcat(s1,s2,16);
	printf("src : %s\ndst : %s\nlen : %zu\n",s1,s2,len);
	return (0);
}
