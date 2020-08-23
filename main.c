
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"

int main()
{
    srand(time(0));
    int cantCarton, tipoCarton, Cartones[MAXCARTONES][FILAS][COLUMNAS];
    int tam=90;
    int vector[90];

    do
    {
        //las siguentes lineas son para elegir la cantidad de cartones
        printf("Bienvenido al bingo\n\n");
        printf("Escribe 1 para solo usar un carton\n");

        for (int i = 2; i <= MAXCARTONES; i++)
        {
            printf("Escribe %d para usar %d cartones\n", i, i);
        }

        printf("Una ves formado tu carton presiona 0\n");
        scanf("%d",&cantCarton);

        //las siguentes lineas son para elegir como van a cargar el carton
        printf("\nQue tipo de carton quieres?\n");
        printf("\nIngrese 1 para tomar un/unos carton/cartones alatorio/s\n");
        printf("Ingrese 2 para personalizar su/s carton/cartones\n");
        scanf("%d",&tipoCarton);

        if(tipoCarton==1)
        {
            system("cls");
            asignarCartones(Cartones,cantCarton);
            dibujarCartones(Cartones,cantCarton);
        }

        if(tipoCarton==2)
        {
            system("cls");
            asignarCartones(Cartones,cantCarton);
            dibujarCartones(Cartones,cantCarton);
        }

    }while(cantCarton==0);
    
     SacarBolitas(vector,tam);
    mostrarBolitas(vector,tam);

    return 0;
}

