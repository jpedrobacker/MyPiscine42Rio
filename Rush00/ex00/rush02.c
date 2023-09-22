/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 10:14:38 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/03 15:37:20 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char n);

void	rush(int x, int y)
{
	int	w;
	int	h;

	h = 1;
	while ((h <= y) && (x > 0 && y > 0))
	{
		w = 1;
		while (w <= x)
		{
			if (h == 1 && (w == x || w == 1))
				ft_putchar('A');
			else if (h == y && (w == x || w == 1))
				ft_putchar('C');
			else if ((w == 1 || w == x) || ((h == 1) || (h == y)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}
