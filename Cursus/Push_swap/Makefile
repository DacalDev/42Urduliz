NAME = push_swap

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Directorios
LIBFT_DIR = ./libft
FT_PRINTF_DIR = ./libft/ft_printf
OBJ_DIR = ./obj

# Archivos fuente de Push_swap (especificados explícitamente)
SRC = main.c \
	utils.c

# Convertir los archivos fuente a archivos objeto en el directorio obj/
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

# Compilación de Libft y ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
$(LIBFT):
	make -C $(LIBFT_DIR)

FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a
$(FT_PRINTF):
	make -C $(FT_PRINTF_DIR)

# Crear directorio de objetos si no existe
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Regla principal
$(NAME): $(OBJ) $(LIBFT) $(FT_PRINTF)
	$(CC) $(OBJ) -L$(LIBFT_DIR) -lft -L$(FT_PRINTF_DIR) -lftprintf $(CFLAGS) -o $(NAME)

# Compilación de archivos objeto
$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -I$(FT_PRINTF_DIR) -c $< -o $@

# Regla para limpiar los archivos objeto (.o) y la carpeta 'obj'
clean:
	rm -f $(OBJ)
	rmdir ./obj
	make clean -C $(LIBFT_DIR)
	make clean -C $(FT_PRINTF_DIR)
	@echo "Archivos objeto eliminados y carpeta 'obj' eliminada."

# Regla para limpiar completamente: eliminar archivos objeto y librería
fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)
	make fclean -C $(FT_PRINTF_DIR)
	@echo "Librería $(NAME) y archivos objeto eliminados."

# Recompilar todo desde cero
re: fclean all

.PHONY: all clean fclean re
