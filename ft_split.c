/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:17:48 by medeana           #+#    #+#             */
/*   Updated: 2021/10/13 16:27:52 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			while (str[i] != c && str[i])
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_write_split(char **str, char const *s, char c)
{
	unsigned int	i;
	unsigned int	len;
	char			*start_chr;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		start_chr = (char *)s;
		while (*s && *s != c)
		{
			len++;
			s++;
		}
		if (*(s - 1) != c)
			str[i++] = ft_substr(start_chr, 0, len);
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**res_str;

	if (!s)
		return (NULL);
	res_str = (char **)malloc((words((char *)s, c) + 1) * sizeof(char *));
	if (!res_str)
		return (NULL);
	return (ft_write_split(res_str, s, c));
}
