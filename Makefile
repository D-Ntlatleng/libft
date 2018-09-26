# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/13 11:30:07 by dntlatle          #+#    #+#              #
#    Updated: 2018/06/18 12:51:40 by dntlatle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra 

CC = gcc

SRCS = ft_atoi.c ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_strtrim.c ft_bzero.c ft_memcmp.c ft_strcat.c ft_strmap.c ft_tolower.c ft_isalnum.c ft_memcpy.c ft_strchr.c ft_strmapi.c ft_toupper.c ft_isalpha.c ft_memdel.c ft_strclr.c ft_strncat.c ft_isascii.c ft_memmove.c ft_strcmp.c ft_strncmp.c ft_isdigit.c ft_memset.c ft_strcpy.c ft_strncpy.c ft_islower.c ft_putchar.c ft_strdel.c ft_strnequ.c ft_isprint.c ft_putchar_fd.c ft_strdup.c ft_strnew.c ft_isspace.c ft_putendl.c ft_strequ.c ft_strnstr.c ft_isupper.c ft_putendl_fd.c ft_striter.c ft_strrchr.c ft_itoa.c ft_putnbr.c ft_striteri.c ft_strsplit.c ft_memalloc.c ft_putnbr_fd.c ft_strjoin.c ft_strstr.c ft_memccpy.c ft_putstr.c ft_strlcat.c ft_strsub.c

OBJ = 	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRCS)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

.PHONY : clean fclean all

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)
re: fclean all
