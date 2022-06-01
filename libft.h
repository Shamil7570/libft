/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:13:29 by medeana           #+#    #+#             */
/*   Updated: 2021/10/13 13:17:02 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void			ft_bzero(void *s, size_t n);

int				ft_isalnum(int c);

int				ft_isalpha(int c);

int				ft_isascii(int c);

int				ft_isdigit(int c);

int				ft_isprint(int c);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

void			*ft_memcpy(void *dst, const void *src, size_t n);

void			*ft_memmove(void *dst, const void *src, size_t len);

void			*ft_memset(void *b, int c, size_t len);

char			*ft_strchr(const char *s, int c);

size_t			ft_strlen(const char *s);

int				ft_strncmp(const char *s1, const char *s2, size_t n);

char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);

char			*ft_strrchr(const char *s, int c);

int				ft_tolower(int c);

int				ft_toupper(int c);

size_t			ft_strlcpy(char *dst, const char *src, size_t size);

size_t			ft_strlcat(char *dst, const char *src, size_t size);

int				ft_atoi(const char *str);

char			*ft_strnstr(const char *haystack,
					const char *needle, size_t len);

int				ft_atoi(const char *str);

char			*ft_strdup(const char *s1);

void			*ft_calloc(size_t count, size_t size);

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char *s, int fd);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_substr(char const *str, unsigned int start, size_t len);

void			ft_putnbr_fd(int n, int fd);

void			ft_putendl_fd(char *s, int fd);

char			*ft_strtrim(char const *s1, char const *set);

char			*ft_itoa(int n);

void			ft_striteri(char *s, void (*f)(unsigned int, char*));

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char			**ft_split(char const *s, char c);

#endif