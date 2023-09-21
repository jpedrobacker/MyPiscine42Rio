/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:40:35 by jbergfel          #+#    #+#             */
/*   Updated: 2023/08/31 15:04:43 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(char a)
{
	write (1, &a, 1);
}

void	ft_print_numbers(void)
{
	char	i;

	i = 48;
	while (i <= 57)
	{
		ft_putint(i);
		i++;
	}
}
/*
int main (void)
{
	ft_print_numbers();
}
*/
