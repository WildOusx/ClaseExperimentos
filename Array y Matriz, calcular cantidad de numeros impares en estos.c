// 8) Dada una matriz y un vector, contar la cantidad de numeros impares en ambos

#include <stdio.h>

int main (){

    int matriz[2][2]; 
    int array[5];
    int i, j;
    int primo1=0, primo2=0;

    printf ("Ingrese los datos de la matriz: \n");

    for ( i = 0; i < 2; i++)
    {
        
        for ( j = 0; j < 2; j++)
        {
            printf ("\nPocision [%d][%d]: ", i, j );
                scanf ("%d", &matriz[i][j]);
        
            if (matriz[i][j] % 2 !=0)
            {

                primo1+= 1;

            }   
            
        }
    
    }
    
    printf ("\nIngrese los datos del array: \n");

    for ( i = 0; i < 5; i++)
    {
        printf ("\nNumero %d: ", i+1);
            scanf ("%d", &array[i]);
    
       if (array[i] % 2 !=0)
       {
        
            primo2+= 1;

       }
       
    }
    
    printf ("\nEn la matriz hay %d numeros impares\n", primo1);

    printf ("\nEn el array hay %d numeros impares\n", primo2);
    
    return 0;

}