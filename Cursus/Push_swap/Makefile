# Nombre del ejecutable
NAME = push_swap

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Directorios
LIBFT_DIR = ./libft

# Archivos fuente de Push_swap (están directamente en la carpeta push_swap)
SRC = main.c\
	push_operations.c\
	quick_sort.c\
	reverse_rotate_operations.c\
	rotate_operations.c\
	stack_utils.c\
	stack.c\
	swap_operations.c\
	utils.c\

# Archivos objeto (se generan en la misma carpeta que los archivos fuente de push_swap)
OBJ = $(SRC:%.c=%.o)

# Archivos de las librerías
LIBFT = $(LIBFT_DIR)/libft.a

# Regla principal: compilar Push_swap, y compilar las librerías si es necesario
all: $(NAME)

# Regla para compilar las librerías si no están compiladas
$(LIBFT):
	@echo "Compilando libft..."
	make -C $(LIBFT_DIR)

# Regla para compilar Push_swap
$(NAME): $(OBJ) $(LIBFT) $(FT_PRINTF)
	@echo "Compilando push_swap..."
	$(CC) $(OBJ) -L$(LIBFT_DIR) -lft -L$(FT_PRINTF_DIR) -lftprintf $(CFLAGS) -no-pie -o $(NAME)

# Regla para compilar los archivos fuente de Push_swap
%.o: %.c $(LIBFT) $(FT_PRINTF)
	@echo "Compilando archivo objeto $@ desde $<..."
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -I$(FT_PRINTF_DIR) -c $< -o $@

# Regla para limpiar los archivos objeto
clean:
	@echo "Limpiando archivos objeto..."
	rm -f $(OBJ)
	make clean -C $(LIBFT_DIR)
	@echo "Archivos objeto eliminados."

# Regla para limpiar completamente: eliminar archivos objeto y librerías
fclean: clean
	@echo "Limpiando push_swap y librerías..."
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)
	@echo "Librería $(NAME) y archivos objeto eliminados."

# Recompilar todo desde cero
re: fclean all

.PHONY: all clean fclean re
