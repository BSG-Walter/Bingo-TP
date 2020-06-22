#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

//PRE: pide un numero minimo y un numero maximo
//POST: devuelve un numero aleatorio entre los numeros dados
int aleatorioEntre(int mini, int maxi);
//PRE: pide un vector, el tama�o del vector y el numero a comprobar
//POST: devuelve 1 si el numero indicado ya estaba en el vector, o 0 si no estaba repetido
int comprobarNumeroRepetidoEnVector(int v[],int tam, int num);
//PRE: pide un vector declarado sin asignar, el tama�o del vector, un numero minimo y un numero maximo
//POST: le asigna al vector numeros aleatorios entre el numero minimo y maximo especificado
void cargarVectorConAleatorios(int v[], int tam, int mini, int maxi);
//PRE: pide un vector declarado sin asignar, el tama�o del vector, un numero minimo y un numero maximo
//POST: le asigna al vector numeros aleatorios sin repetir entre el numero minimo y maximo especificado
void cargarVectorConAleatoriosSinRepetir(int v[], int tam, int mini, int maxi);
//PRE: Pide el vector del carton. TIENE QUE SER DE TAMA�O [3][5]
//POST: utiliza la funcion de cargarVectorConAleatoriosSinRepetir para llenar dicho vector
void asignarCarton(int v[3][5]);
//PRE: Pide el vector del carton (TIENE QUE SER DE TAMA�O [3][5]) y el numero del carton
//POST: Dibuja en consola un carton, indicando su numero e imprimiendo el vector en 3x5
void dibujarCarton(int v[3][5], int num);

#endif // FUNCIONES_H_INCLUDED
