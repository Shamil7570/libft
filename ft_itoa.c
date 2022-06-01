/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:12:49 by medeana           #+#    #+#             */
/*   Updated: 2021/10/12 13:15:09 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static size_t	ft_nblen(int n)
{
	size_t	size_n;
	int		nb;

	nb = n;
	size_n = 0;
	if (nb <= 0)
		size_n++;
	while (nb)
	{
		size_n++;
		nb /= 10;
	}
	return (size_n);
}

char	*ft_itoa(int n)
{
	size_t	size_n;
	char	*str;

	size_n = ft_nblen(n);
	str = (char *)malloc(size_n + 1);
	if (!str)
		return (0);
	if (n == -2147483648)
		return (ft_copy(str, "-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	str[size_n] = '\0';
	while (n)
	{
		str[size_n - 1] = n % 10 + '0';
		size_n--;
		n /= 10;
	}
	return (str);
}
