# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjadalla <sjadalla@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 16:56:54 by sjadalla          #+#    #+#              #
#    Updated: 2022/02/15 17:23:36 by sjadalla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
RM      = rm -f

SRCS    = ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
            ft_tolower.c ft_toupper.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
            ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
            ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
            ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c \
            ft_strtrim.c ft_striteri.c ft_strmapi.c ft_split.c ft_itoa.c \
            ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
            ft_strjoin.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
        ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
        ft_lstmap.c

OBJS    = $(SRCS:.c=.o)

OBJSBONUS = $(BONUS:.c=.o)

$(NAME):    $(OBJS)
			ar -rcs $(NAME) $(OBJS)

bonus:      $(OBJS) $(OBJSBONUS) 
			ar -rcs	$(NAME) $(OBJSBONUS) $(OBJS)

all:        $(NAME)

clean:
			$(RM) $(OBJS) $(OBJSBONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

