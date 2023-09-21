/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:35:14 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/17 10:41:37 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		j;
	char	*dst;

	j = 0;
	dst = malloc(ft_strlen(src) + 1);
	if (!dst)
		return (0);
	while (src[j])
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
/*
int main(void)
{
	char    *str;
	char    *alc;
	
	str = "copia essa merda";
	alc = ft_strdup(str);
	printf("original: %s\ncopia: %s", str, alc);
	return 0;
}*/
