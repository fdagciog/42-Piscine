/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <fdagciog@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 08:15:39 by fdagciog          #+#    #+#             */
/*   Updated: 2022/02/15 08:19:29 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	k;
	int	l;

	k = 0;
	while (k < size - 1)
	{
		l = k;
		while (l < size)
		{
			if (tab[k] > tab[l])
			{
				temp = tab[k];
				tab[k] = tab[l];
				tab[l] = temp;
			}
			l++;
		}
		k++;
	}
}
