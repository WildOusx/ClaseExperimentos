// 4) Que mediante un array almacene números tanto positivos como negativos y los muestre ordenados.

#include <stdio.h>

int main() {

    float numeros[10];
    float temp;
    int i, j;

    printf ("Ingrese 10 numeros para que sean ordenados:\n");

    for ( i = 0; i < 10; i++)
    {
        printf ("Numero %d: ", i+1);
            scanf ("%f", &numeros[i]);
    }
    
    for (i = 0; i < 9; i++) { //metodo de ordenamiento de seleccion, i usa la posicion 0 del array para comparar
        
        for (j = i + 1; j < 10; j++) { //j compara con el numero anterior que es usado por i
            
            if (numeros[i] > numeros[j]) { //el algoritmo se activa si el numero en la posicion i es mas grande que el de la pocision j
                
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;

            }
        }
    } // si el numero de i no es mayor que el de j, el algoritmo sigue hasta que encuentre uno mayor
    
    printf("\nNumeros ordenados: \n");
    for (i = 0; i < 10; i++) {
        printf("\n%.2f ", numeros[i]);
    }

    printf ("\n");

    return 0;

}