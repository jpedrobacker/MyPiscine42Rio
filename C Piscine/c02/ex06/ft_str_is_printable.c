/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:47:39 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/06 11:04:36 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main (void)
{
	printf ("%d", ft_str_is_printable("(*@(!*$@$&"));
	printf ("%d", ft_str_is_printable("asdhauwbASDASDdddas"));
	printf ("%d", ft_str_is_printable("\n"));
	return (0);
}*/
