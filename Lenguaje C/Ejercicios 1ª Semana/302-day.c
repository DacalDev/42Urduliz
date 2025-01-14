#include <stdio.h>

int	main(void)
{
	char	nombre[]="Javier";
	int		edad;
	float	peso;

	edad = 38;
	peso = 78.5;
	printf("Mi nombre es %s, tengo %d años y peso %0.1f Kg\n",nombre, edad, peso);
	return(0);
}
