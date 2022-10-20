# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yberrim <yberrim@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 00:07:47 by yberrim           #+#    #+#              #
#    Updated: 2022/10/20 00:08:25 by yberrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
 
SRCS =	ft_isalnum.c \
    ft_isprint.c \
    ft_isalpha.c \
    ft_strlen.c \
    ft_isdigit.c \
    ft_isascii.c \
    ft_memset.c \
    ft_bzero.c \
    ft_memcpy.c \
    ft_strlcpy.c \
    ft_strlcat.c \
    ft_toupper.c \
    ft_tolower.c \
    ft_strchr.c \
    ft_strrchr.c \
    ft_strncmp.c \
    ft_memcmp.c \
    ft_memchr.c \
    ft_strnstr.c \
    ft_calloc.c \
    ft_strdup.c \
    ft_strtrim.c \
    ft_atoi.c \
    ft_substr.c \
    ft_strjoin.c \
    ft_putchar_fd.c \
    ft_putstr_fd.c \
    ft_putendl_fd.c \
    ft_strmapi.c \
    ft_striteri.c \
    ft_split.c \
    ft_itoa.c \
    ft_memmove.c \
    ft_putnbr_fd.c \

OBJS = $(SRCS:.c=.o)

BNUS =	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \

OBJSBONUS = $(BNUS:.c=.o)

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: ${NAME}

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(OBJSBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS) $(OBJSBONUS)
		ar -rcs $(NAME) $(OBJS) $(OBJSBONUS)
