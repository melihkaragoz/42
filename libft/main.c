#include "libft.h"

int	main(void)
{
	char	s1[] = "tripouille";
	char	s2[] = "42";
	//char *s = ft_strjoin("tripouille", "42");
	char *s = ft_strjoin(s1,s2);
	printf("%s\n",s);
	return (0);
}
