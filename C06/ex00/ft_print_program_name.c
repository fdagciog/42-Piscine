/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <fdagciog@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:17:59 by fdagciog          #+#    #+#             */
/*   Updated: 2022/02/28 18:18:35 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc)
	{
		while (argv[0][i] != '\0')
		{	
			write(1, &argv[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
