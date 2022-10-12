int	main(void)
{
	char	s1[] = "mkaragoz";
	char	s2[] = "aaaaaaaaaaaa";
	char	s1n[] = "mkaragoz";
	char	s2n[12];

	printf("[ORG] before(s2) : %s\n", s2);
	printf("[ORG] before(s1) : %s\n\n", s1);
	memcpy(s2, s1, 8);
	ft_memcpy(s2n,s1n,8);
	printf("[ORG] after(s2) :\t%s\n", s2);
	printf("[NEW] after(s2n) :\t%s\n", s2n);
	printf("[ORG] after(s1) :\t%s\n", s1);
	printf("[NEW] after(s1n) :\t%s\n", s1n);
	return (0);
}
