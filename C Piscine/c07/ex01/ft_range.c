/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:42:30 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/17 13:10:33 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	r;
	int	i;
	int	*b;
	int	*d;

	if (min >= max)
		return (0);
	r = max - min;
	b = malloc(r * sizeof(int));
	d = b;
	if (!d)
		return (0);
	i = 0;
	while (i < r)
	{
		b[i] = min + i;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
int main(void)
{
	int min;
	int max;
	int ra;
	int i;
	int *t;

	i = 0;
	min = 10;
	max = 1000;
	ra = max - min;
	t = ft_range(min, max);
	while (i < ra)
	{
		printf("%d, ", t[i]);
		i++;
	}
}*/
