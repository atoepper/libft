# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 14:20:11 by atoepper          #+#    #+#              #
#    Updated: 2025/09/22 12:50:07 by atoepper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ==============================
#            LIBRARY
# ==============================
NAME = libft.a

# Directories
LIBFT_DIR = libft
PRINTF_DIR = ft_printf
GNL_DIR = get_next_line

LIBFT_SRC_DIR = $(LIBFT_DIR)/src
PRINTF_SRC_DIR = $(PRINTF_DIR)/src
GNL_SRC_DIR = $(GNL_DIR)/src

LIBFT_INC = $(LIBFT_DIR)/incl
PRINTF_INC = $(PRINTF_DIR)/incl
GNL_INC = $(GNL_DIR)/incl

# Compiler settings
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_INC) -I$(PRINTF_INC) -I$(GNL_INC)

# ==============================
#            SOURCES
# ==============================
LIBFT_SRCS = $(wildcard $(LIBFT_SRC_DIR)/*.c)
PRINTF_SRCS = $(wildcard $(PRINTF_SRC_DIR)/*.c)
GNL_SRCS = $(wildcard $(GNL_SRC_DIR)/*.c)

SRCS = $(LIBFT_SRCS) $(PRINTF_SRCS) $(GNL_SRCS)
OBJS = $(SRCS:.c=.o)

# ==============================
#            RULES
# ==============================
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
