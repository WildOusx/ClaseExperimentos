// 1) Que lea 5 números por teclado, los copie a otro array multiplicados por 2 y muestre el segundo array

#include <stdio.h>

int main () {

    int numeros1[5], numeros2[5]; //array de numeros

    int i;


    printf ("Introduzca 5 numeros para que sean multiplciados: \n");

    for ( i = 0; i < 5; i++)
    {
        printf ("\nNumero %d: ", i+1);
            scanf ("%d", &numeros1[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        numeros2[i]= numeros1[i] * 2;
    }


    printf ("\nLos numeros multiplicados son: ");

    for ( i = 0; i < 5; i++)
    {
        printf ("\n%d ", numeros2[i]);
    }

    printf ("\n");

    return 0;

}