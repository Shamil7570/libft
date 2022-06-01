/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:23:15 by medeana           #+#    #+#             */
/*   Updated: 2021/10/13 15:33:40 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*buf;

	buf = NULL;
	while (*s)
	{
		if (*s == (char)c)
			buf = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (buf);
}
