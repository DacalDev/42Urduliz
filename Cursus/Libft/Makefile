# Nombre del programa (librería)
NAME = libft.a

# Compilador y flags
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Archivos fuente (en la misma carpeta que el Makefile)
SRC = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c

# Objetos (generados a partir de los archivos fuente)
OBJ = $(SRC:.c=.o)

# Nombre del binario de prueba
TEST_BIN = test_libft

# Reglas

# Regla principal que compila la librería
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)     # Crear librería estática libft.a
	@echo "Librería $(NAME) creada correctamente."

# Regla 'all' para compilar la librería
all: $(NAME)

# Regla para limpiar los archivos objeto (.o)
clean:
	@rm -f $(OBJ)
	@echo "Archivos objeto eliminados."

# Regla para limpiar los archivos objeto y la librería
fclean: clean
	@rm -f $(NAME)
	@rm -f $(TEST_BIN)      # Eliminar también el binario de prueba
	@rm -f *.txt            # Eliminar todos los archivos .txt
	@echo "Librería $(NAME), binario $(TEST_BIN) y archivos de texto .txt de pruebas eliminados."

# Regla para recompilar todo
re: fclean all

# Regla para compilar y ejecutar las pruebas del test_libft.c
test: all
	cc -Wall -Wextra -Werror test_libft.c -L. -lft -o test_libft
	./test_libft

# Evitar el relink innecesario (marcar ciertas reglas como "phony")
.PHONY: all clean fclean re
