/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:21:56 by jbergfel          #+#    #+#             */
/*   Updated: 2023/09/10 17:04:58 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkinput(char **argv, int *input)
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	if (checksintax(argv) == 1)
	{
		while (argv[i])
		{
			if ((argv[i] >= '1' && argv[i] <= '4') && ((argv[i + 1] == '')
					|| ((argv[i + 1] == 0) && argv[i - 1] == '')))
			{
				input[out] = (argv[i] - '0');
				out++;
				i++;
			}
			if ((argv[i] >= 9 && argv[i] <= 13) || argv[i] == 32)
				i++;
			else
				return (out);
		}
		input[out] = '\0';
		return (out);
	}
	return (0);
}
