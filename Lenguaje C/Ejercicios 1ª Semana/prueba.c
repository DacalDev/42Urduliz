#include <stdio.h>

int main(void)
{
    int a, b;
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
    printf("Valores introducidos: a = %d, b = %d\n", a, b);
    return 0;
}
