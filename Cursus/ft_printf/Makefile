# Nombre del archivo de salida
NAME = libftprintf.a

# Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente (en la misma carpeta que el Makefile)
SRC = ft_printf.c \
	ft_print_char.c \
	ft_print_string.c \
	ft_print_pointer.c \
	ft_print_decimal.c \
	ft_print_unsigned.c \
	ft_print_hex.c

# Objetos (generados a partir de los archivos fuente)
OBJ = $(SRC:.c=.o)

# Comando para crear la librería estática
AR = ar rcs

# Regla principal: compilar la librería
all: $(NAME)

# Cómo construir el archivo de librería
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Cómo compilar los archivos .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar los archivos objeto (.o)
clean:
	@rm -f $(OBJ)
	@echo "Archivos objeto eliminados."

# Regla para limpiar los archivos objeto y la librería
fclean: clean
	@rm -f $(NAME)
	@echo "Librería $(NAME) y archivos objeto eliminados."

# Regla para recompilar todo
re: fclean all

# Evitar el relink innecesario (marcar ciertas reglas como "phony")
.PHONY: all clean fclean re
