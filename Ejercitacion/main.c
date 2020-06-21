#include <stdio.h>
#include <stdlib.h>


int main()
{
    //vector que el tamaño lo indique el usuario con enteros y mostrar el promedio

int _tamanoV;

printf("Ingrese tamaño del vector: \n");
scanf("%d" , &_tamanoV);
fflush(stdin);

int _vector[_tamanoV];
int suma = 0;

for(int i = 0 ; i < _tamanoV ; i++){

        _vector[i] = (rand()% 100) +1;
        suma += _vector[i];
printf("[%3d] %i \n" , i ,_vector[i] );
}

printf("Promedio: %i" , suma/_tamanoV);
    return 0;
}

/*
int main()
{
    //vector que permita cargar 5 numeros y mostralo pantalla

    int _vectorInt[5];

    for(int i = 0 ; i < 5 ; i++ ){
        printf("Ingrese el numero %d: \n" , i+1);
        scanf("%d" , &_vectorInt[i] );
        fflush(stdin);
    }

    for(int i = 0; i < 5 ; i++){
        printf("[%2d] %d \n" , _vectorInt[i] , i);
    }


    return 0;
}

*/
