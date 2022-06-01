/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:33:13 by medeana           #+#    #+#             */
/*   Updated: 2021/10/07 15:55:19 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*new_dst;
	unsigned char		*new_src;

	if (src == NULL && dst == NULL)
		return (NULL);
	new_dst = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	if (new_dst < new_src)
	{
		while (len--)
		{
			*new_dst++ = *new_src++;
		}
	}
	else
	{
		while (len--)
		{
			new_dst[len] = new_src[len];
		}
	}
	return (dst);
}
