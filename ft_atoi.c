/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:55:41 by medeana           #+#    #+#             */
/*   Updated: 2021/10/08 19:44:57 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space(const char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
	{
		return (1);
	}
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				n;
	unsigned int	res;
	char			*str2;

	i = 0;
	n = 1;
	res = 0;
	str2 = (char *) str;
	while (space(&str2[i]))
		i++;
	if (str2[i] == '-')
		n *= -1;
	if (str2[i] == '-' || str2[i] == '+')
		i++;
	while (str2[i] != '\0' && str2[i] >= '0' && str2[i] <= '9')
	{		
		res = (res * 10) + (str2[i] - '0');
		i++;
	}
	if (res > 2147483648 && n == -1)
		return (0);
	if (res > 2147483647 && n == 1)
		return (-1);
	return (res * n);
}
