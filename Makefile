# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchiling <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/20 11:39:19 by kchiling          #+#    #+#              #
#    Updated: 2021/01/20 14:10:49 by kchiling         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isdigit.c \
	  ft_memset.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_isprint.c \
	  ft_putchar_fd.c \
	  ft_strlcat.c \
	  ft_substr.c \
	  ft_atoi.c \
	  ft_itoa.c \
	  ft_putendl_fd.c \
	  ft_strlcpy.c \
	  ft_tolower.c \
	  ft_bzero.c \
	  ft_memccpy.c \
	  ft_putnbr_fd.c \
	  ft_strlen.c \
	  ft_toupper.c \
	  ft_calloc.c \
	  ft_memchr.c \
	  ft_putstr_fd.c \
	  ft_strmapi.c \
	  ft_isalnum.c \
	  ft_memcmp.c \
	  ft_split.c \
	  ft_strncmp.c \
	  ft_isalpha.c \
	  ft_memcpy.c \
	  ft_strchr.c \
	  ft_strnstr.c \
	  ft_isascii.c \
	  ft_memmove.c \
	  ft_strdup.c \
	  ft_strrchr.c

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
