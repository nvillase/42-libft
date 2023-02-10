# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvillase <nvillase@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 13:57:32 by nvillase          #+#    #+#              #
#    Updated: 2023/02/10 16:55:06 by nvillase         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CCFLAG = -Wall -Wextra -Werror

RM = rm
RMFLAG = -f

SRCS =	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strlen.c \
		ft_strlcpy.c

OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CCFLAG) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(RMFLAG) $(OBJS)

fclean: clean
		$(RM) $(RMFLAG) $(NAME)

re: fclean all