#include <stdio.h>
#include <stdlib.h>

typedef struct Point
{
	double	x;
	double	y;
} Point;

int	main(void)
{
	Point	p;
	p.x = 50;
	p.y = 33.5;
	printf("x = %lf, y = %lf\n", p.x, p.y);
	return (0);
}
