/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:28:38 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/04 10:44:07 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	*a;
	int	*b;
	int	i;
	int	j;

	i = 1;
	j = 2;
	a = &i;
	b = &j;
	ft_swap(a, b);
	printf("%d, %d", i, j);
}*/
