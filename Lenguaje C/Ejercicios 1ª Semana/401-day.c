#include <stdio.h>

int	main(void)
{
	int		suma;
	int		resta;
	int		multiplicacion;
	//float	division;
	int		a;
	int		b;

	printf("Introduce el primer valor:\n");
	if (scanf("%d", &a) != 1) {
		printf("Error en la entrada.\n");
		return 1;
	}
	printf("Introduce el segundo valor:\n");
	if (scanf("%d", &b) != 1) {
		printf("Error en la entrada.\n");
		return 1;
	}
	suma = a+b;
	resta = a-b;
	multiplicacion = a*b;
	printf("Suma: %d\n", suma);
	printf("Resta: %d\n", resta);
	printf("Multiplicación: %d\n", multiplicacion);
	return (0);
}
