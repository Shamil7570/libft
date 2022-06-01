/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:30:25 by medeana           #+#    #+#             */
/*   Updated: 2021/10/11 13:19:06 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*p;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	str = malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	p = str;
	while (*s1)
	{
		*p = *s1;
		p++;
		s1++;
	}
	*p = '\0';
	return (str);
}
