/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <fdagciog@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:21:52 by fdagciog          #+#    #+#             */
/*   Updated: 2022/02/28 18:22:17 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int ac, char **av)
{
	int		cnt;
	int		i;
	char	*bucket;

	cnt = 1;
	while (cnt <= ac)
	{
		i = 2;
		while (i <= ac - 1)
		{
			if (ft_strcmp(av[i], av[i - 1]) < 0)
			{
				bucket = av[i];
				av[i] = av[i - 1];
				av[i - 1] = bucket;
			}
			i++;
		}
		cnt++;
	}
	cnt = 0;
	while (++cnt < ac)
		ft_putstr(av[cnt]);
}
