/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:33:04 by medeana           #+#    #+#             */
/*   Updated: 2021/10/08 11:38:31 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*new_dest;
	const char	*new_srs;

	if (src == NULL && dst == NULL)
		return (NULL);
	new_dest = (char *)dst;
	new_srs = (const char *)src;
	while (n--)
	{
		*new_dest = *new_srs;
		new_dest++;
		new_srs++;
	}
	return (dst);
}
