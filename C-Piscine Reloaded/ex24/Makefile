# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 17:55:53 by jdacal-a          #+#    #+#              #
#    Updated: 2024/09/19 18:05:23 by jdacal-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definición de variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = obj
LIB_NAME = libft.a

# Listado de archivos fuente y objetos
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Regla por defecto
all: $(LIB_NAME)

# Regla para compilar la biblioteca
$(LIB_NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

# Regla para compilar los archivos objeto
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# Regla para eliminar archivos objeto
clean:
	rm -f $(OBJ_DIR)/*.o
	rm -rf $(OBJ_DIR)

# Regla para eliminar archivos objeto y la biblioteca
fclean: clean
	rm -f $(LIB_NAME)

# Regla para hacer una limpieza completa y recompilar
re: fclean all
 