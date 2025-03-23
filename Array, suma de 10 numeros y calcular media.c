// 3) Que lea 10 números por teclado, los almacene en un array y muestre la media.

#include <stdio.h>

int main (){

    int numeros[10];
    int i;
    float suma, media;

    printf("Ingrese 10 numeros para calcular la media: \n");

        for ( i = 0; i < 10; i++)
        {
            printf("\nNumero %d: ", i+1);
                scanf ("%d", &numeros[i]);
            
            suma= suma + numeros[i];
        
        }
        
    media= suma / 10;

    printf ("\nLa media de los 10 numeros ingresados es de: %.2f\n", media);

}