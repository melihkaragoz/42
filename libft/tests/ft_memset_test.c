#include <stdio.h>

void	*memset(void *ptr, int x, size_t n);

int	main(void)
{
	char s[] = "melihkaragoz";
	printf(" before :%s\n",s);
	memset(s,'!',5);
	printf(" after :%s\n",s);
	memset(s+9,'?',3);
	printf(" after-1 :%s\n",s);
	return (0);
}
