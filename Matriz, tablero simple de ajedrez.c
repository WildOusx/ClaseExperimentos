// 5) Que pinte en un tablero de ajedrez, los peones con la letra p, las torres con T
// los caballos con la letra C, los alfiles con la letra A, el rey con R y la reina con M

#include <stdio.h>

int main(){

char tablero[8][8] = {
 {'T', 'C', 'A', 'R', 'M', 'A', 'C', 'T'},
 {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
 {'.', '.', '.', '.', '.', '.', '.', '.'},
 {'.', '.', '.', '.', '.', '.', '.', '.'},
 {'.', '.', '.', '.', '.', '.', '.', '.'},
 {'.', '.', '.', '.', '.', '.', '.', '.'},
 {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
 {'t', 'c', 'a', 'm', 'r', 'a', 'c', 't'},
}; // En el caso de una sola letra se usa el %c de caracter, el %s es para mas de una letra o conjunto de caracteres

int i , j;

for ( i = 0; i < 8; i++)
{
    for ( j = 0; j < 8; j++)
    {
        printf ("%c ", tablero[i][j]);
    }
    printf ("\n");
}

return 0;

}

// printf ("Que pieza desea mover?: ");
    // if (scanf (" %c%d", &entrada_culumna, &entrada_fila)) != 2
    //{
    //  printf ("\nPieza invalida!\n");
    //  while (getchar() != '\n');
    //  continue;
    //}

// printf ("A que pocision?: ");
    // if (scanf (" %c%d", &salida_culumna, &salida_fila)) != 2
    //{
    //  printf ("\nMovimiento Invalido!\n");
    //  while (getchar() != '\n');
    //  continue;
    //}