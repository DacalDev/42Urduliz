# Nombre de la librería
NAME = libft.a

# Compilador y flags
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Directorio de ft_printf
FT_PRINTF_DIR = ft_printf

# Archivos fuente de Libft
SRC = ft_atoi.c \
	ft_atol.c\
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

# Archivos fuente de ft_printf
FT_PRINTF_SRC = $(FT_PRINTF_DIR)/ft_print_char.c \
				$(FT_PRINTF_DIR)/ft_print_decimal.c \
				$(FT_PRINTF_DIR)/ft_print_hex.c \
				$(FT_PRINTF_DIR)/ft_print_pointer.c \
				$(FT_PRINTF_DIR)/ft_print_string.c \
				$(FT_PRINTF_DIR)/ft_print_unsigned.c \
				$(FT_PRINTF_DIR)/ft_printf.c

# Archivos objeto
OBJ = $(SRC:.c=.o)
FT_PRINTF_OBJ = $(FT_PRINTF_SRC:.c=.o)

# Regla principal que compila la librería
$(NAME): $(OBJ) $(FT_PRINTF_OBJ)
	@ar rcs $(NAME) $(OBJ) $(FT_PRINTF_OBJ)   # Crear librería estática libft.a
	@echo "Librería $(NAME) creada correctamente con ft_printf incluido."

# Regla 'all' para compilar la librería
all: $(NAME)

# Regla para limpiar los archivos objeto (.o)
clean:
	@rm -f $(OBJ) $(FT_PRINTF_OBJ)
	@echo "Archivos objeto eliminados."

# Regla para limpiar los archivos objeto y la librería
fclean: clean
	@rm -f $(NAME)
	@echo "Librería $(NAME) eliminada."

# Regla para recompilar todo
re: fclean all

# Evitar el relink innecesario
.PHONY: all clean fclean re
