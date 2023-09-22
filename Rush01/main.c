/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:36:50 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/10 17:07:54 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	checkinput(char **argv, int *input);	

int	main(int argc, char **argv[])
{
	int	input[16];

	if (argc == 2)
	{
		if (checkinput(argv[1], input) == 16)
			write(1, "error\n", 6);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
