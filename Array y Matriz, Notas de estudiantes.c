// 6) Que gestione las notas de una clase de 20 alumnos de los cuales sabemos
// el nombre y la nota, el programa debe ser capaz de:
// buscar un alumno
// modificar su nota
// realizar la media de todas sus notas
// relizar la media de las notas menores de 5
// mostrar el alumnos con mejor y peor nota que ha sacado

#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombres[5][30];
    float notas[5][3], suma[5];
    int i, j;
    int opcion, puesto, mayornota, menornota, contadormenores_5; 
    float media, mayor, menor,  sumamenores_5;

    printf ("Ingrese nombre y 3 notas del alumno: \n");

    for ( i = 0; i < 5; i++)
    {
        printf ("\nIngrese nombre del alumno %d: ", i+1);
            scanf ("%s", nombres[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        system("cls");
        
        suma[i]=0; //hacemos que la suma de las tres notas esten guardadas en un array que por cada iteracion este se haga 0

        printf ("Ingrese las 3 notas del alumno %s \n", nombres[i]);
        
        for ( j = 0; j < 3; j++)
        {
            printf ("\nNota %d: ", j+1);
                scanf ("%f", &notas[i][j]);
        
            suma[i]+= notas[i][j]; // la suma de todas las notas se guardan en el array para despues ser calculado para los promedios
        }
        
    }
    
    system ("cls");

    printf ("Menu de opciones\n");

    printf ("\n1) Buscar alumno\n");
    printf ("\n2) Modificar nota de alumno\n");
    printf ("\n3) Calcular nota media de un alumno\n");
    printf ("\n4) Calcular nota media de las notas menores que 5\n");
    printf ("\n5) Mostrar alumno con el mejor promedio\n");
    printf ("\n6) Mostrar alumno con el peor promedio\n");

    printf ("\nQue accion desea realizar?: ");
        scanf ("%d", &opcion);

    switch (opcion){
        
        case 1: // El caso uno hace una busqueda de las notas del alumno deseado
            
            system ("cls");
            
            printf ("Lista de alumnos: \n");
                for ( i = 0; i < 5; i++)
                {
                    printf ("\n%d) %s\n", i+1, nombres[i]);
                }
                
            printf ("\nQue alumno desea ver?: ");
                scanf("%d", &puesto); // la variable puesto nos ayuda a buscar numericamente el alumno deseado al tener esos datos guardados en un array
            
            if (puesto > 0 && puesto < 6)
            {
                printf ("\nEl alumno de puesto %d de nombre %s\n", puesto, nombres[puesto]);
                printf ("Sus notas son: \n");
                for ( i = 0; i < 3; i++)
                {
                    printf ("\nNota %d es: %.1f", i+1, notas[puesto][j]);
                }
                
            }    
        
        break;
        
        
        case 2:
            
            system ("cls");
            
            printf ("Lista de alumnos: \n");
                for ( i = 0; i < 5; i++)
                {
                    printf ("\n%d) %s\n",i+1 , nombres[i]);
                }
                
            printf ("\nQue alumno desea modificar?: ");
                scanf("%d", &puesto);
                puesto= puesto - 1;
            
            if (puesto >= 1 && puesto <= 5)
            {
                printf ("\nIngrese las notas del alumno %s nuevamente:", nombres[i]);
                
                suma[i]=0;
                
                for ( j = 0; j < 3; j++)
                {
                    printf ("\nNota %d: ", j+1);
                        scanf ("%f", &notas[i][j]);
                
                    suma[i]+= notas[i][j];
                }              
            }
        
        break;
        
        
        case 3:

            system("cls");

             printf ("Lista de alumnos: \n");
                for ( i = 0; i < 5; i++)
                {
                    printf ("\n%d) %s\n",i+1 , nombres[i]);
                }
                
            printf ("\nQue alumno desea conocer su media?: ");
                scanf("%d", &puesto);
                puesto= puesto-1; // se hace el puesto-1 para que al escoger una opcion no salga la incorrecta, ya que el array comienza en 0 y las opciones en 1
           
            if (puesto >= 1 && puesto <= 5)
            {
                media= suma[i] / 3;

                printf ("\nLa media del alumno %s es de %.2f\n", nombres[puesto], media);
            }
        
        break;

        
        case 4:
            
            sumamenores_5 = 0;
            contadormenores_5 = 0;
            
            // Recorrer todas las notas de los 5 alumnos
            for (i = 0; i < 5; i++) {
                for (j = 0; j < 3; j++) {
                    // Si la nota es menor que 5
                    if (notas[i][j] < 5) {
                        sumamenores_5 += notas[i][j];  // Sumar la nota
                        contadormenores_5++;  // Contar las notas menores que 5
                    }
                }
            }
            
            // Si hay notas menores que 5
            if (contadormenores_5 > 0) {
                media = sumamenores_5 / contadormenores_5;  // Calcular la media
                printf("\nLa media de las notas menores que 5 es: %.2f\n", media);
            } else {
                printf("\nNo hay notas menores que 5.\n");
            }
        
        break;

        
        case 5:
            
            mayor= -1; // se hace -1, el primero numero se compara con este para una mejor secuencia comparativa
            mayornota= -1;

            for ( i = 0; i < 5; i++)
            {
                if (suma[i] > mayor)
                {
                    mayor= suma[i] / 3;
                    mayornota= i;
                }
            }
            
            printf("\nEl alumno %s tuvo el mejor promedio con %.2f\n", nombres[mayornota], mayor);
        
        break;

        
        case 6:

            menor= 1000; //el numero a comparar en menor es 1000, el primer numero se compara con este y asi tener una secuencia comparativa correcta
            menornota= -1;
            
            for ( i = 0; i < 5; i++)
            {
                if (suma[i] < menor)
                {
                    menor= suma[i] / 3;
                    menornota= i;
                }
            }
            
            printf("\nEl alumno %s tuvo el menor promedio con %.2f\n", nombres[menornota], menor);
        
        break;
            
        
        default:
            printf ("\nHa ingresado una opcion incorrecta\n");
        break;
    
    }
    
    return 0;
}