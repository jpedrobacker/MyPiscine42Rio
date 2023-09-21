/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:28:33 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/01 12:15:37 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	char	digit[3]
	while (a <= 55)
	{
		b = a +1
		while (b <= 56)
		{
			while (c <= 57)
			{
				if (c == 57)
				{
					break;
				}
				digit[0] = a;
				digit[1] = b;
				digit[2] = c;
				write(1, digit, 3);
				write(1, ", ", 2);
				c++;
			}            
			if (b == 56)
			{
				break;
			}
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			write(1, ", ", 2);
			b++;
		}
		if (a == 56)
		{
			break;
		}
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (!(a == 55 && b==56 && c==57))
		{
			write(1, ", ", 2);
		}
		a++;
	}
}
/*
int	main (void)
{
	ft_print_comb();
}
*/
