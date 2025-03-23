// 9) Escriba un programa que cree una matriz de N x N elementos (con N = 20). 
// El programa debe leer la matriz y calcular la suma de los elementos de las dos diagonales de la matriz.


#include <stdio.h>
#define N 3


int main(){

    int matriz[N][N];
    int i,j;    
    int diagonal1= 0, diagonal2= 0;
    
    
    printf ("Ingrese los datos de la matriz [%d][%d]\n", N, N);

    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            printf ("\nEspacio [%d][%d]: ", i, j);
                scanf ("%d", &matriz[i][j]);
        }
        
    }
    
    for ( i = 0; i < N; i++)
    {
        diagonal1 += matriz[i][i];
        diagonal2 += matriz[i][N-i-1];
    }
    

    printf ("\nEl resultado de la primera diagonal es de: %d\n", diagonal1);

    printf ("\nEl resultado de la segunda diagonal es de: %d\n", diagonal2);

    return 0;

}