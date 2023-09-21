/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:14:55 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/19 21:26:43 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (!power)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (--power > 0)
	{
		nb *= res;
	}
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
        printf("%d\n", ft_iterative_power(2, 3));
        printf("%d\n", ft_iterative_power(0, 3));
        printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(0, 0));
	return (0);
}*/
