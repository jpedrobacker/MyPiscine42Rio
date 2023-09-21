/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:26:27 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/08 09:10:32 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 65 && str[j] <= 90)
			str[j] += 32;
		j++;
	}
	while (str[i] != '\0')
	{
		c = i - 1;
		if (i == 0 && (str[i] > 97 && str[i] < 123))
			str[i] = str[i] - 32;
		if ((str[c] > 31 && str[c] < 48) && (str[i] > 96 && str[i] < 123))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main (void)
{
	char a[] = "Salut, comMent tu vAs ? 42Mots quarante-deux; cinquente+et+un";
	printf ("%s", ft_strcapitalize(a));
	return (0);
}*/
