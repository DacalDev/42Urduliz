# Nombre del ejecutable
NAME = push_swap

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directorio de la librería
LIBFT_DIR = libft

# Archivos fuente de Push_swap
SRC = src/operations/push.c \
	src/operations/reverse_rotate.c \
	src/operations/rotate.c \
	src/operations/swap.c \
	src/push_swap/execute_rotations.c \
	src/push_swap/memory.c \
	src/push_swap/parser.c \
	src/push_swap/push_swap.c \
	src/push_swap/sort.c \
	src/push_swap/sort_turk.c \
	src/push_swap/sort_utils.c \
	src/push_swap/stack_index.c \
	src/push_swap/stack_utils.c \
	src/push_swap/targets.c \
	src/push_swap/turk_helpers.c \
	src/push_swap/turk_utils.c

# Archivos objeto
OBJ = $(SRC:%.c=%.o)

# Librería estática
LIBFT = $(LIBFT_DIR)/libft.a

# Regla principal
all: $(LIBFT) $(NAME)

# Compilar la librería si no existe
$(LIBFT):
	@echo "Compilando libft..."
	@make -C $(LIBFT_DIR)

# Compilar el ejecutable
$(NAME): $(OBJ)
	@echo "Compilando push_swap..."
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

# Compilar objetos individuales
%.o: %.c
	@echo "Compilando archivo objeto $@ desde $<..."
	$(CC) $(CFLAGS) -Iinc -I$(LIBFT_DIR) -c $< -o $@

# Limpiar archivos objeto
clean:
	@echo "Limpiando archivos objeto..."
	rm -f $(OBJ)
	@make clean -C $(LIBFT_DIR)

# Limpiar todo (objetos + ejecutable + librería)
fclean: clean
	@echo "Limpiando push_swap y librerías..."
	rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)

# Recompilar desde cero
re: fclean all

.PHONY: all clean fclean re
