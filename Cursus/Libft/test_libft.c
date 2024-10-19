/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:12:37 by marvin            #+#    #+#             */
/*   Updated: 2024/10/11 18:33:52 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

int	main()
{
	printf("\n");
	printf("\033[1;31mPrueba de ft_atoi\033[0m\n");
	printf("%d\n", ft_atoi("   -12345"));  // Salida: -12345
	printf("%d\n", ft_atoi("42"));         // Salida: 42
	printf("%d\n", ft_atoi("  +5678"));    // Salida: 5678
	printf("%d\n", ft_atoi("   987abc"));  // Salida: 987 (se detiene cuando encuentra 'a')
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;32mPrueba de ft_bzero\033[0m\n");
	char buffer[10];
	// Inicializamos el buffer con el carácter 'A'
	memset(buffer, 'A', sizeof(buffer));
	// Imprimimos el contenido original del buffer
	printf("Buffer antes de ft_bzero:\n");
	for (int i = 0; i < 10; i++)
		printf("%c ", buffer[i]);
	printf("\n");
	// Usamos la función ft_bzero para llenar los primeros 5 bytes con 0
	ft_bzero(buffer, 5);
	// Imprimimos el contenido del buffer después de usar ft_bzero
	printf("\nBuffer después de ft_bzero:\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", buffer[i]); // Mostramos los valores numéricos
	printf("\n\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;33mPrueba de ft_calloc\033[0m\n");
	void *ptr;
	size_t j;     // Reemplazamos i por j
	size_t num;   // Declaración de num
	size_t siz;   // Declaración de siz
	// Prueba 1: Asignación de memoria para un array pequeño de 5 elementos de 4 bytes cada uno (int)
	num = 5;
	siz = sizeof(int);
	ptr = ft_calloc(num, siz);
	printf("Prueba 1: ft_calloc(%zu, %zu) = %p (esperado: dirección válida)\n", num, siz, ptr);
	if (ptr) {
		int *arr = (int *)ptr;
		// Verificar si la memoria está inicializada a 0
		for (j = 0; j < num; j++)
			printf("%d ", arr[j]);
		printf("\n");
		free(ptr);
	}
	// Prueba 2: Asignación de memoria para un array de 10 caracteres
	num = 10;
	siz = sizeof(char);
	ptr = ft_calloc(num, siz);
	printf("Prueba 2: ft_calloc(%zu, %zu) = %p (esperado: dirección válida)\n", num, siz, ptr);
	if (ptr) {
		char *str = (char *)ptr;
		// Verificar si la memoria está inicializada a 0
		for (j = 0; j < num; j++)
			printf("%d ", str[j]);  // Debería imprimir 0s
		printf("\n");
		free(ptr);
	}
	// Prueba 3: Asignación de memoria para un array grande (1000 dobles)
	num = 1000;
	siz = sizeof(double);
	ptr = ft_calloc(num, siz);
	printf("Prueba 3: ft_calloc(%zu, %zu) = %p (esperado: dirección válida)\n", num, siz, ptr);
	if (ptr) {
		double *arr = (double *)ptr;
		// Verificar si la memoria está inicializada a 0
		for (j = 0; j < 10; j++)  // Solo imprimimos los primeros 10 elementos
			printf("%.1f ", arr[j]);  // Debería imprimir 0.0
		printf("\n");
		free(ptr);
	}
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;34mPrueba de ft_isalnum\033[0m\n");
	char	c;
	char	msg_alnum[] = " es un carácter alfanumérico.\n";
	char	msg_no_alnum[] = " no es un carácter alfanumérico.\n";
	c = '&';
	write(1, &c, 1);
	if (ft_isalnum(c))
		write(1, msg_alnum, sizeof(msg_alnum) - 1);
	else
		write(1, msg_no_alnum, sizeof(msg_no_alnum) - 1);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;35mPrueba de ft_isalpha\033[0m\n");
	char	q;
	char	msg_letra[] = " es una letra.\n";
	char	msg_no_letra[] = " no es una letra.\n";
	q = 'R';
	write(1, &q, 1);
	if (ft_isalpha(q))
		write(1, msg_letra, sizeof(msg_letra) - 1);
	else
		write(1, msg_no_letra, sizeof(msg_no_letra) - 1);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;36mPrueba de ft_isascii\033[0m\n");
	int		i;
	int		size;
	char	test_chars[] = {'A', 'z', '1', '\n', 128, -1};
	char	msg_ascii[] = " es un carácter ASCII.\n";
	char	msg_non_ascii[] = " no es un carácter ASCII.\n";
	i = 0;
	size = sizeof(test_chars) / sizeof(test_chars[0]);
	while (i < size)
	{
		write(1, &test_chars[i], 1);
		if (ft_isascii(test_chars[i]))
			write(1, msg_ascii, sizeof(msg_ascii) - 1);
		else
			write(1, msg_non_ascii, sizeof(msg_non_ascii) - 1);
		i++;
	}
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;31mPrueba de ft_isdigit\033[0m\n");
	char	w;
	char	msg_digit[] = " es un digito.\n";
	char	msg_no_digit[] = " no es un digito.\n";
	w = 'p';
	write(1, &w, 1);
	if (ft_isdigit(w))
		write(1, msg_digit, sizeof(msg_digit) - 1);
	else
		write(1, msg_no_digit, sizeof(msg_no_digit) - 1);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;32mPrueba de ft_isprint\033[0m\n");
	char	e;
	char	msg_printable[] = " es un carácter imprimible.\n";
	char	msg_non_printable[] = " no es un carácter imprimible.\n";
	e = '\n';
	write(1, &e, 1);
	if (ft_isprint(e))
		write(1, msg_printable, sizeof(msg_printable) - 1);
	else
		write(1, msg_non_printable, sizeof(msg_non_printable) - 1);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;33mPrueba de ft_itoa\033[0m\n");
		char	*str;
	str = ft_itoa(-12345);
	if (str)
	{
		printf("El número convertido es: %s\n", str);  // Salida: -12345
		free(str);  // Liberar la memoria
	}
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;34mPrueba de ft_memchr\033[0m\n");
	const char	*stri;
	char		*resultado;
	char		caracter;
	size_t		n;
	stri = "Hola, mundo";
	caracter = 'H';
	n = ft_strlen(stri); // Tamaño de la cadena
	resultado = ft_memchr(stri, caracter, n);
	if (resultado != 0)
		printf("El carácter '%c' se encontró en la posición: %ld\n", caracter, resultado - stri);
	else
		printf("El carácter '%c' no se encontró en la cadena.\n", caracter);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;35mPrueba de ft_memcmp\033[0m\n");
	const char str1[] = "Hola, mundo";
	const char str2[] = "Hola, amigo";
	const char str3[] = "Hola, mundo";
	// Comparar los primeros 10 caracteres de str1 y str2
	int resultado1 = ft_memcmp(str1, str2, 10);
	if (resultado1 < 0)
		printf("str1 es menor que str2\n");
	else if (resultado1 > 0)
		printf("str1 es mayor que str2\n");
	else
		printf("str1 es igual a str2\n");
	// Comparar los primeros 11 caracteres de str1 y str3
	int resultado2 = ft_memcmp(str1, str3, 11);
	if (resultado2 < 0)
		printf("str1 es menor que str3\n");
	else if (resultado2 > 0)
		printf("str1 es mayor que str3\n");
	else
		printf("str1 es igual a str3\n");
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;36mPrueba de ft_memcpy\033[0m\n");
	char source[] = "Hello, World!";
	char destination[20];
	// Usamos ft_memcpy para copiar el contenido de source a destination
	ft_memcpy(destination, source, strlen(source) + 1);  // +1 para incluir el '\0'
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;31mPrueba de ft_memmove\033[0m\n");
	char strq[] = "Hello, World!";
	printf("Resultado antes de ft_memmove: %s\n", strq);
	// Usamos ft_memmove para copiar una parte de la cadena en la misma cadena (superposición)
	ft_memmove(strq + 7, strq, 5); // Copiar los primeros 5 caracteres a la posición 6
	printf("Resultado después de ft_memmove: %s\n", strq);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;32mPrueba de ft_memset\033[0m\n");
	char buffer_mem[20];
	char buffer_set[20];
	// Llenamos ambos buffers con un carácter inicial, por ejemplo 'A'.
	memset(buffer_mem, 'A', sizeof(buffer_mem));
	memset(buffer_set, 'A', sizeof(buffer_set));
	// Imprimimos el contenido original de los buffers
	printf("Buffer inicial (antes de memset):\n");
	printf("buffer_men: %s\n", buffer_mem);
	printf("buffer_set: %s\n\n", buffer_set);
	// Usamos la función memset original para llenar con 'B' y tu función ft_memset.
	memset(buffer_mem, 'B', 10);
	ft_memset(buffer_set, 'B', 10);
	// Imprimimos el contenido final después de usar las funciones.
	printf("Buffer final (después de memset):\n");
	printf("buffer_mem: %s\n", buffer_mem);
	printf("buffer_set: %s\n", buffer_set);
	// Comparamos los resultados.
	if (memcmp(buffer_mem, buffer_set, 20) == 0)
		printf("\n¡Las funciones memset y ft_memset son equivalentes!\n");
	else
		printf("\nLas funciones memset y ft_memset no producen los mismos resultados.\n");
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;33mPrueba de ft_putchar\033[0m\n");
	// Abre el archivo en modo escritura (crea el archivo si no existe, y lo trunca si existe)
	int	fd = open("ft_putchar.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1) // Verifica si hubo un error al abrir el archivo
	{
		write(2, "Error al abrir el archivo\n", 27); // Escribir error a stderr
		return (1);
	}
	// Escribir un carácter en el archivo usando ft_putchar_fd
	ft_putchar_fd('X', fd);
	// Cierra el archivo
	close(fd);
	write(2, "ft_putchar_fd.txt abierto y rellenado correctamente\n", 46);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;34mPrueba de ft_putendl\033[0m\n");
	ft_putendl_fd("Hola, 42Urduliz!", 1);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;35mPrueba de ft_putnbr\033[0m\n");
	int	fp = open("ft_putnbr_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fp < 0)
	{
		perror("Error opening file");
		return (1);
	}
	ft_putnbr_fd(42, fp);
	write(fp, "\n", 1);
	ft_putnbr_fd(-1234, fp);
	write(fp, "\n", 1);
	ft_putnbr_fd(0, fp);
	write(fp, "\n", 1);
	close(fp);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;36mPrueba de ft_putstr_fd\033[0m\n");
	// Abre el archivo en modo escritura (crea el archivo si no existe, y lo trunca si existe)
	int ff = open("ft_putstr_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (ff == -1) // Verifica si hubo un error al abrir el archivo
	{
		write(2, "Error al abrir el archivo\n", 27); // Escribir error a stderr
		return (1);
	}
	// Escribir una cadena en el archivo usando ft_putstr_fd
	ft_putstr_fd("Hola, 42 Urduliz!\n", ff);
	close(ff); // Cierra el archivo
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;31mPrueba de ft_split\033[0m\n");
	char	**result;
	int		k;
	result = ft_split("Hola---mundo---42", '-');
	if (result)
	{
		k = 0;
		while (result[k])
		{
			printf("result[%d] = '%s'\n", k, result[k]);
			free(result[k]);
			k++;
		}
		free(result); // Liberar el array
	}
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;32mPrueba de ft_strchr\033[0m\n");
	const	char *cadena = "Hola mundo";
	char	carac = 'm';
	// Busca el carácter 'm' en la cadena
	char	*resul = ft_strchr(cadena, carac);
	if (resul != NULL)
	{
		printf("El carácter '%c' se encontró en la posición: %ld\n", carac, resul - cadena);
	}
	else
		printf("El carácter '%c' no se encontró en la cadena.\n", carac);
	// Prueba con el carácter nulo
	resul = ft_strchr(cadena, '\0');
	printf("El carácter nulo se encuentra en la posición: %ld\n", resul - cadena);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;33mPrueba de ft_strdup\033[0m\n");
	const char *original = "Hola, mundo!";
	char *duplicado = ft_strdup(original);
	if (duplicado == NULL)
	{
		printf("Error al duplicar la cadena.\n");
		return 1;
	}
	printf("Cadena original: %s\n", original);
	printf("Cadena duplicada: %s\n", duplicado);

	// Liberar la memoria asignada para la cadena duplicada
	free(duplicado);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;34mPrueba de ft_striteri\033[0m\n");
	void	print_char(unsigned int i, char *c)
		{
			printf("Index: %u, Char: %c\n", i, *c);
		}
	char	strin[] = "hello world";
	ft_striteri(strin, print_char);
	printf("Resultado: %s\n", strin);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;35mPrueba de ft_strjoin\033[0m\n");
	char *s1 = "Hola, ";
	char *s2 = "mundo!";
	char *joined_str;
	joined_str = ft_strjoin(s1, s2);
	if (joined_str)
	{
		printf("Concatenación: %s\n", joined_str); // Esperado: "Hola, mundo!"
		free(joined_str); // Liberar la memoria asignada
	}
	else
		printf("Error al concatenar cadenas.\n");
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;36mPrueba de ft_strlcat\033[0m\n");
	char dest[20] = "Hello, "; // Espacio suficiente para concatenar
	const char *src = "World!";
	// Usamos ft_strlcat para concatenar la cadena
	size_t resulta = ft_strlcat(dest, src, sizeof(dest));
	// Imprimimos el resultado
	printf("Destino después de ft_strlcat: %s\n", dest);
	printf("Longitud total de la cadena: %zu\n", resulta);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;31mPrueba de ft_strlcpy\033[0m\n");
	char desti[20]; // Espacio suficiente para la copia
	const char *srce = "Hello, World!";
	// Usamos ft_strlcpy para copiar la cadena
	size_t resu = ft_strlcpy(desti, src, sizeof(desti));
	// Imprimimos el resultado
	printf("Fuente: %s\n", srce);
	printf("Destino: %s\n", desti);
	printf("Longitud total de la fuente: %zu\n", resu);
	// Probar el comportamiento con size = 0
	size_t result_zero = ft_strlcpy(desti, srce, 0);
	printf("Longitud total de la fuente (con size=0): %zu\n", result_zero);
	printf("Destino (con size=0): %s\n", desti);
	// Debería seguir siendo "Hello, World!"
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;32mPrueba de ft_strlen\033[0m\n");
	printf("La longitud de la cadena es: %zu\n", ft_strlen("Hola Mundo!"));
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;33mPrueba de ft_strmapi\033[0m\n");
	char	to_uppercase(unsigned int index, char c)
	{
		if (index % 2 == 0)
		// Por ejemplo, cambia los caracteres en índices pares
			return (ft_toupper(c));
			// Usamos tu propia función ft_toupper para convertir a mayúsculas.
		return (c);
		// Deja el resto de los caracteres sin cambios.
	}
		char *resultad = ft_strmapi("hola mundo", to_uppercase);
	if (resultad)
	{
		printf("Resultado: %s\n", resultad);
		// Imprime: "HoLa MuNdO"
		free(resultad);
	}
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;34mPrueba de ft_strncmp\033[0m\n");
	const char *stri1 = "Hola, mundo";
	const char *stri2 = "Hola, amigos";
	const char *stri3 = "Hola, mundo";
	const char *stri4 = "H";
	size_t y;
	// Comparación de las primeras 7 letras
	y = 7;
	printf("Comparando las primeras %zu letras de \"%s\" y \"%s\":\n", y, stri1, stri2);
	if (ft_strncmp(stri1, stri2, y) == 0)
		printf("Son iguales en los primeros %zu caracteres.\n", y);
	else
		printf("Son diferentes en los primeros %zu caracteres.\n", y);
	// Comparación completa entre stri1 y stri3
	y = strlen(stri1);
	printf("\nComparando \"%s\" y \"%s\" en sus primeros %zu caracteres:\n", stri1, stri3, y);
	if (ft_strncmp(stri1, stri3, y) == 0)
		printf("Son iguales en los primeros %zu caracteres.\n", y);
	else
		printf("Son diferentes en los primeros %zu caracteres.\n", y);
	// Comparación de una cadena corta con una larga (primer carácter)
	y = 1; // Ahora comparamos solo el primer carácter
	printf("\nComparando las primeras %zu letras de \"%s\" y \"%s\":\n", y, stri4, stri1);
	if (ft_strncmp(stri4, stri1, y) == 0)
		printf("Son iguales en los primeros %zu caracteres.\n", y);
	else
		printf("Son diferentes en los primeros %zu caracteres.\n", y);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;35mPrueba de ft_strnstr\033[0m\n");
	const char	*st = "Hola, bienvenido a la programación en C";
	const char	*sub_st  = "bienvenido";
	size_t leng = 20;
	char *res = ft_strnstr(st, sub_st, leng);
	if (res != 0)
		printf("Subcadena encontrada: %s\n", res);
	else
		printf("Subcadena no encontrada en los primeros %zu caracteres.\n", leng);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;36mPrueba de ft_strrchr\033[0m\n");
	const char	*cad;
	char		*re;
	char		cara;
	cad = "Hola, mundo";
	cara = 'm';
	re = ft_strrchr(cad, cara);
	// Buscar la última aparición de 'caracter'
	if (re != 0)
		printf("La última aparición de '%c' está en la posición: %ld\n", cara, re - cad);
	else
		printf("No se encontró el carácter '%c' en la cadena.\n", cara);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;31mPrueba de ft_strtrim\033[0m\n");
	char *se1 = "   ---Hola, mundo---   ";
	char *set = " -";
	char *trimmed;
	trimmed = ft_strtrim(se1, set);
	if (trimmed)
	{
		printf("Resultado: '%s'\n", trimmed);  // Esperado: "Hola, mundo"
		free(trimmed); // Liberar la memoria
	}
	else
		printf("Error al recortar la cadena.\n");
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;32mPrueba de ft_substr\033[0m\n");
	char	*s;
	char	*sub;
	s = "Hola, mundo!";
	// Extraer la substring que empieza en el índice 7 y con longitud 5
	sub = ft_substr(s, 6, 5);
	if (sub)
	{
		printf("Substring: %s\n", sub); // Esperado: "mundo"
		free(sub); // Liberar la memoria
	}
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;33mPrueba de ft_tolower\033[0m\n");
	char	letra;
	char	letra_minuscula;
	letra = 'W';
	letra_minuscula = ft_tolower(letra);
	printf("Letra en minúscula: %c\n", letra_minuscula);
	char simbolo = '%';
	printf("Carácter no alfabético: %c\n", ft_tolower(simbolo));
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;34mPrueba de ft_toupper\033[0m\n");
	char	letter;
	char	letra_mayuscula;
	letter = 'x';
	letra_mayuscula = ft_toupper(letter);
	printf("Letra en mayúscula: %c\n", letra_mayuscula);
	char simbol = '%';
	printf("Carácter no alfabético: %c\n", ft_toupper(simbol));
	printf("\n¡Test finalizados con exito!\n");

	return (0);
}
