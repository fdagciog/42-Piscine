/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reserve_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 05:55:35 by fdagciog          #+#    #+#             */
/*   Updated: 2022/02/10 06:11:36 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	reverse_alph;

	reverse_alph = 'z';
	while (reverse_alph >= 'a')
	{
		ft_putchar(reverse_alph);
		reverse_alph --;
	}
}
