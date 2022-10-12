#include <stdio.h>

void	bzero(void *s, size_t n);

int	main(void)
{
	char s[] = "melihkaragoz";
	bzero(s+6,3);  // s+6.karatkterden itibaren 3 byte null basar.
	printf("%s\n",s); // null basildiktan sonra string basindan ilk null karaktere kadar olan string
	printf("%s\n",s+9); // null basildiktan sonra sag tarafta kalan bolunmus string
	return (0);
}

