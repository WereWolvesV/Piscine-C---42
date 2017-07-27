/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 10:21:02 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/11 10:32:29 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (!*str)
		return (1);
	while (str[i] != '\0')
	{
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
			if (str[i] == '\0')
				return (1);
		}
		return (0);
	}
	return (0);
}