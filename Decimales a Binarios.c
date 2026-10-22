#include <stdio.h>

int main()
{
    long long decimal;
    int binario[64];
    int i = 0;

    printf("====================================\n");
    printf("   CONVERSOR DECIMAL A BINARIO\n");
    printf("====================================\n");

    printf("Ingresa un numero decimal entero: ");

    if (scanf("%lld", &decimal) != 1)
    {
        printf("Error: debes ingresar un numero entero.\n");
        return 1;
    }

    if (decimal < 0)
    {
        printf("Error: ingresa un numero positivo o cero.\n");
        return 1;
    }

    if (decimal == 0)
    {
        printf("El numero binario es: 0\n");
        return 0;
    }

    while (decimal > 0)
    {
        binario[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("El numero binario es: ");

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binario[j]);
    }

    printf("\n");

    return 0;
}
