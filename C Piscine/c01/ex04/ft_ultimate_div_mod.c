/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:11:04 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/04 19:27:29 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	if (*b != 0)
	{
		c = *a;
		d = *b;
		*a = c / d;
		*b = c % d;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	r;
	int	*a;
	int	*b;

	i = 37;
	r = 10;
	a = &i;
	b = &r;
	ft_ultimate_div_mod(a, b);
	printf("%d , %d", i, r);
}*/
