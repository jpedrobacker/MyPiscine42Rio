/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:51:00 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/19 14:25:56 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	res;

	res = nb;
	if (res <= 0)
	{
		return (0);
	}
	if (res == 1)
	{
		return (1);
	}
	i = 2;
	if (res >= 2)
	{
		while (i * i <= res)
		{
			if (i * i == res)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_sqrt(90));
    return (0);
}*/
