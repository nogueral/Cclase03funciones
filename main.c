#include <stdio.h>
#include <stdlib.h>

/*
Escribir  un programa que realice las siguientes acciones
1. Limpie la pantalla
2. Asigne a 2 variables numero1 y numero2 valores distintos de cero
3. Efectœe el producto de dichas variables
4. Muestre el resultado pos pantalla
Obtenga el cuadrado de numero1 y lo muestre par pantalla
*/

int main()
{
    int numero1, numero2, producto, cuadrado;

    printf("\nIngrese un numero: ");
    scanf("%d", &numero1);

    printf("\nIngrese otro numero: ");
    scanf("%d", &numero2);

    producto = numero1 * numero2;
    printf("\nEl cuadrado es: %d", producto);

    cuadrado = numero1 * numero1;
    printf("\nEl cuadrado es: %d", cuadrado);

    return 0;
}
