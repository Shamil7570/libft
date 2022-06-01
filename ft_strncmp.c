/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:40:17 by medeana           #+#    #+#             */
/*   Updated: 2021/10/07 15:55:35 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*new_s1;
	unsigned char	*new_s2;

	new_s1 = (unsigned char *)s1;
	new_s2 = (unsigned char *)s2;
	while (n--)
	{
		if ((*new_s1 != *new_s2) || (*new_s1 == '\0' && *new_s2 == '\0'))
		{
			return (*new_s1 - *new_s2);
		}
		new_s1++;
		new_s2++;
	}
	return (0);
}
