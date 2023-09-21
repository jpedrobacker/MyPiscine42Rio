/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:41:38 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/06 11:18:08 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
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
	printf ("%d", ft_str_is_uppercase(""));
	printf ("%d", ft_str_is_uppercase("SADASD"));
	printf ("%d", ft_str_is_uppercase("fsiefdawASDASD"));
	return (0);
}*/
