# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: medeana <medeana@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 15:47:25 by medeana           #+#    #+#              #
#    Updated: 2021/10/13 13:17:11 by medeana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC_FILES = ft_isalpha.c \
			ft_isdigit.c \
   			ft_isalnum.c \
   			ft_isascii.c \
   			ft_isprint.c \
   			ft_strlen.c \
   			ft_memset.c \
   			ft_memcpy.c \
   			ft_bzero.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_strchr.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_atoi.c \
			ft_strdup.c \
			ft_calloc.c \
			ft_strnstr.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_strjoin.c \
			ft_putnbr_fd.c \
			ft_putendl_fd.c \
			ft_substr.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_striteri.c \
			ft_strmapi.c \
			ft_split.c
			
			
						
						
OBJ_FILES = $(SRC_FILES:.c=.o)

HEADER = -I libft.h

RM = rm -rf

all:  $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(HEADER)
$(NAME): $(OBJ_FILES)
	ar crs $(NAME) $(OBJ_FILES)
clean:
	$(RM) $(OBJ_FILES)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: clean fclean re