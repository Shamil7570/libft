/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:16:07 by medeana           #+#    #+#             */
/*   Updated: 2021/10/11 11:49:59 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*new_s;

	new_s = (char *)s;
	while (*new_s != (char)c)
	{
		if (*new_s == '\0')
		{
			return (NULL);
		}
		new_s++;
	}
	return (new_s);
}
