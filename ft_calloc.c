/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:24:13 by medeana           #+#    #+#             */
/*   Updated: 2021/10/12 12:18:44 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*a;
	unsigned int	i;
	size_t			b;

	b = (size * count);
	a = malloc(b);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (b--)
	{
		a[i] = 0;
		i++;
	}
	return ((void *)a);
}
