int	main(void)
{
  void  *vp;
  void  *tmp;
  int   t;
  size_t  count;
  size_t  size;
  int	c;

  count = 5;
  c = 1;
  size = sizeof(int);
  vp = ft_calloc(count,size);
  tmp = vp;
  while(vp < tmp+(size*count))
  {
    t = *((int *)vp);
    printf("\n %d) p: %p\tv: %d",c++,vp,t);
    vp++;
  }
	return (0);
}
