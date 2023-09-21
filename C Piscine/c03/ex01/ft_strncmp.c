/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:47:37 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/09 15:45:53 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				res;
	unsigned int	i;

	i = 0;
	if (n != 0)
	{
		while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0') && i < n -1)
		{
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (res = s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main()
{
    printf("%d", ft_strncmp("ABCDDASD", "ABCDasda", 6));
}*/
