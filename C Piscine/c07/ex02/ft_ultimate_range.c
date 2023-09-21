/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:01:24 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/19 13:43:16 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*r;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = max - min;
	r = malloc(i * sizeof(int));
	if (r == 0)
	{
		return (-1);
	}
	i = 0;
	while (max > min)
	{
		r[i] = min;
		min++;
		i++;
	}
	*range = r;
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	int min;
	int max;
	int i;
	int s;
	int *t;

	i = 0;
	min = 10;
	max = 50;
	s = ft_ultimate_range(&t, min, max);
	printf("total: %d\n", s);
	while (i < s)
	{
		printf("%d, ", t[i]);
		i++;
	}
}*/
