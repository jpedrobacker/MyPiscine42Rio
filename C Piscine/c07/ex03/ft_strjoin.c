/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:56:38 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/19 16:42:46 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char **strs, int size)
{
	int	j;
	int	h;

	h = 0;
	j = 0;
	while (size > 0)
	{
		while (strs[size - 1][j] != '\0')
		{
			j++;
			h++;
		}
		size--;
	}
	return (h);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*s;

	s = malloc(sizeof(char *) * ft_strlen(strs, size));
	i = 0;
	c = 0;
	j = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
		j = 0;
	}
	s[c] = '\0';
	return (s);
}
/*
#include <stdio.h>
int main(int argc, char *argv[])
{
		printf("%s", ft_strjoin(argc, argv, "+"));
}*/
