/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:04:44 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/09 16:23:17 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char*to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			else
				j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
  char a[]="Pegue essa string daqui";
  char b[]="aoi";
  printf("%s\n", ft_strstr(a,b));
}*/
