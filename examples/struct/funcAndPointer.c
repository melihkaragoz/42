/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcAndPointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 05:29:00 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/10/27 06:27:07 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


typedef struct Point{
	int	x;
	int	y;
} Point;

Point	getMiddlePoint(Point a, Point b)
{
	Point	m;
	m.x = (a.x + b.x) / 2;
	m.y = (a.y + b.y) / 2;
	return (m);
}

void	getMiddleWithoutLeak(const Point *a, const Point *b, Point *res)
{
	res->x = (a->x + b->x) / 2;
	res->y = (a->y + b->y) / 2;
}

Point	*getMiddleWithLeak(Point *a, Point *b)
{
	Point	*m = malloc(sizeof(Point));
	m->x = (a->x + b->x) / 2;
	m->y = (a->y + b->y) / 2;
	return (m);
}

int	main(void)
{
	Point	pt0 = {40, 20};
	Point	pt1 = {60, 18};
	Point	*ptres;
	Point	res = {
		.x = 0,
		.y = 0
	};

	ptres = &res;
	ptres = getMiddleWithLeak(&pt0,&pt1);
	printf("x = %d,\ty = %d\n", ptres->x, ptres->y);
	free(ptres);
	return (0);
}
