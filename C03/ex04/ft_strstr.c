/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <fdagciog@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 01:36:22 by fdagciog          #+#    #+#             */
/*   Updated: 2022/02/21 01:36:30 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int		c;
	int		d;

	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		d = 0;
		while (str[c + d] == to_find[d] && str[c + d] != '\0')
		{
			if (to_find[d + 1] == '\0')
				return (&str[c]);
			d++;
		}
		c++;
	}
	return (0);
}
