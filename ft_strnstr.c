/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:10:13 by medeana           #+#    #+#             */
/*   Updated: 2021/10/13 15:19:01 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while ((i + j < len) && (haystack[i + j] == needle[j]))
			{
				j++;
				if (!needle[j])
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}
	// int		i;
	// size_t	needle_len;

	// i = 0;
	// needle_len = ft_strlen(needle);
	// if (needle_len == 0)
	// 	return ((char *)haystack);
	// if (len > ft_strlen(haystack))
	// 	len = ft_strlen(haystack);
	// while (i <= (int)(len - needle_len))
	// {
	// 	if (ft_strncmp(haystack, needle, needle_len) == 0)
	// 		return ((char *)haystack);
	// 	else
	// 		haystack++;
	// 	i++;
	// }
	// return (NULL);