int	main(void)
{
	int	f;

	f = open("fd_example.txt",O_RDWR | O_CREAT,777);
	printf("fd is : %d\n",f);
	ft_putchar_fd('m',f);
	return (0);
}
