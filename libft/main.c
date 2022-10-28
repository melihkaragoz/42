#include "libft.h"

int	main(void)
{
/* 	t_list *n1;
	t_list *n2;
	t_list *n3;
	n1 = malloc(sizeof(t_list));
	n2 = malloc(sizeof(t_list));
	n3 = malloc(sizeof(t_list));
	n1->content = "n1 content";
	n2->content = "n2 content";
	n3->content = "n3 content";
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL; */

	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*n4;

	n1 = ft_lstnew("ilk node");
	n2 = ft_lstnew("ikinci node");
	n3 = ft_lstnew("ucuncu node");
	n4 = ft_lstnew("dorduncu node");

	ft_lstadd_back(&n1,n2);
	ft_lstadd_back(&n1,n3);
	/* ft_lstadd_back(&n2,n4); */

	printf("son : %p\n",n3->next);
	ft_lstadd_back(&n1,n4);
	printf("son : %p\n",n3->next);
	printf("son icerik : %s\n",n3->next->content);
	return (0);
}
