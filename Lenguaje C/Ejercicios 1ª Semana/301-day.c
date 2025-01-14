#include <stdio.h>

int	main(void)
{
	float	farenheit;
	float	celsius;

	celsius = 15.33;
	farenheit = ((celsius * 9/5) + 32.0);
	printf("%0.2f grados Celsius, son %0.2f grados Farenheit\n",celsius, farenheit);
	return(0);
}
