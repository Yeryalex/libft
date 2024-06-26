# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrodrigu <yrodrigu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 17:38:48 by yrodrigu          #+#    #+#              #
#    Updated: 2024/02/20 22:43:16 by yrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_isalpha.c\
		 ft_isdigit.c\
		 ft_isalnum.c\
		 ft_isascii.c\
		 ft_isprint.c\
		 ft_strlen.c\
		 ft_memset.c\
		 ft_toupper.c\
		 ft_tolower.c\
		 ft_bzero.c\
		 ft_memcpy.c\
		 ft_memmove.c\
		 ft_strlcpy.c\
		 ft_strlcat.c\
		 ft_strchr.c\
		 ft_strrchr.c\
		 ft_strncmp.c\
		 ft_memchr.c\
		 ft_memcmp.c\
		 ft_strnstr.c\
		 ft_atoi.c\
		 ft_calloc.c\
		 ft_strdup.c\
		 ft_substr.c\
		 ft_strjoin.c\
		 ft_strtrim.c\
		 ft_split.c\
		 ft_itoa.c\
		 ft_strmapi.c\
		 ft_striteri.c\
		 ft_putchar_fd.c\
		 ft_putstr_fd.c\
		 ft_putendl_fd.c\
		 ft_putnbr_fd.c
OFILES = $(CFILES:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar -crs $(NAME) $(OFILES)

%.o: %.c libft.h Makefile
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
