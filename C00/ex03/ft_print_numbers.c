/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 07:43:02 by fdagciog          #+#    #+#             */
/*   Updated: 2022/02/10 07:58:55 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	print_nmb;

	print_nmb = '0';
	while (print_nmb <= '9')
	{
		ft_putchar(print_nmb);
		print_nmb ++;
	}
}
