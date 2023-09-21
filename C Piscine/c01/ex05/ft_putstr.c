/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:18:29 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/04 19:28:03 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	tam;

	tam = 0;
	while (str[tam])
		tam++;
	write(1, str, tam);
}
/*
int	main(void)
{
	ft_putstr("ola");
}*/
