int aleatorioEntre(int mini, int maxi)
{
    return mini + rand()%(maxi-mini+1);
}

int comprobarNumeroRepetidoEnVector(int v[],int tam, int num)
{
    for(int i = 0; i < tam; i++)
    {
        if (v[i] == num)
        {//si se encontro la variable num repetida devulvemos 1
            return 1;
        }
    }
    //si no se encontro ningun numero repetido en el vector devolvemos 0
    return 0;
}

void cargarVectorConAleatorios(int v[], int tam, int mini, int maxi)
{
    int aleatorio = 0;

    for (int i = 0; i < tam; i++)
    {
        aleatorio = aleatorioEntre(mini, maxi);
        v[i] = aleatorio;
    }
}

void cargarVectorConAleatoriosSinRepetir(int v[], int tam, int mini, int maxi)
{
    int aleatorio = 0;

    for (int i = 0; i < tam; i++)
    {
        do//este do while asigna el nuevo numero aleatorio al vector hasta que sea diferente a los demas
        {
            aleatorio = aleatorioEntre(mini, maxi);
            v[i] = aleatorio;
        }while(comprobarNumeroRepetidoEnVector(v,i,aleatorio) == 1);
    }
}

void asignarCarton(int v[3][5])
{
    int tempvector[15];
    cargarVectorConAleatoriosSinRepetir(tempvector,15,1,90);

    for(int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            v[i][j] = tempvector[i*5 + j];
        }

    }
}

void asignarCartonManualmente(int v[3][5])
{
    int tempv[15];//vector temporal donde se guardaran los numeros que diga el usuario sin repetirse.
    int num;//numero que eligio el usuario
    int seguir;//variable que define si podemos seguir asignando numeros nuevos o hay que meter otro numero distinto
    //elijo primero guardarlo en un vector de 1 dimension para aprovechar la funcion de buscar numeros repetidos
    for(int i = 0; i < 15; i++)
    {
        do//este do while se repite hasta que el numero sea del 1 al 90 y que no sea repetido
        {
            printf("Escriba un numero del 1 al 90 sin repetir(%d/15)\n", i+1);
            scanf("%d",&num);
            if (comprobarNumeroRepetidoEnVector(tempv,i,num) == 0)//si el numero ingresado no es repetido
            {
                if ((num > 0) && (num <91))//si el numero ingresado vale entre 1 y 90
                {
                    tempv[i] = num;
                    seguir = 1;
                }else
                {
                    printf("El numero tiene que ser entre 1 y 90!\n", i+1);
                    seguir = 0;
                }
            }else
            {
                printf("El numero esta repetido! elige otro\n", i+1);
                seguir = 0;
            }
        }while(seguir == 0);
    }
    //ahora solo asignamos el vector temporal al vector 2d asignado
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            v[i][j] = tempv[i*5 + j];
        }
    }
}

void dibujarCarton(int v[3][5], int num)
{
    printf("------------------\n");
    printf("|    CARTON %d    |\n", num);
    printf("------------------\n");

    for(int i = 0; i < 3; i++)
    {
        printf("| ");

        for (int j = 0; j < 5; j++)
        {
            if (v[i][j] < 10)//si es menor a 10 dibujamos un 0 para que todos los numeros tengan 2 cifras
            {
                printf("0");
            }
            printf("%d ", v[i][j]);
        }
        printf("|\n");
    }
    printf("------------------\n");
}

