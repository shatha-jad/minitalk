# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 19:43:09 by sjadalla          #+#    #+#              #
#    Updated: 2022/08/17 20:39:53 by sjadalla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT = client.o

SERVER = server.o

SRC = client.c server.c

CLIENT_NAME = client

SERVER_NAME = server

LIBFT_DIR = libft

LIBFT = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(CLIENT_NAME) $(SERVER_NAME)
		
$(CLIENT_NAME): $(OBJ)
	Make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(CLIENT) -o $@ $(LIBFT_DIR)/$(LIBFT)
	
$(SERVER_NAME): $(OBJ)
	Make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(SERVER) -o $@ $(LIBFT_DIR)/$(LIBFT)

$(LIBFT) : 
	@make -C $(LIBFT_DIR)

clean:
	@make -C $(LIBFT_DIR) clean
	@$(RM) server.o client.o

fclean:
	@make -C $(LIBFT_DIR) fclean
	@make -C ./ clean

re:
	@make fclean
	@make all
