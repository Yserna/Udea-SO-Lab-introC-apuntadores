#include <stdio.h>

int contarCaracter(char *array, char ch); /* prototipo de funcion */

int main() {
    char caracter;
    char cadena[100];
    int cantidadApariciones;
    printf("Ingrese la cadena de caracteres: ");
    scanf("%s", cadena);
    printf("Ingrese el caracter a buscar: ");
    scanf(" %c", &caracter);
    cantidadApariciones = contarCaracter(cadena, caracter); /* llamada a la funcion */
    if(cantidadApariciones == -1) {
        printf("El caracter %c no se encuentra en la cadena. Respuesta función: %d\n", caracter, cantidadApariciones);
    } else {
        printf("El caracter %c se encuentra %d veces en la cadena ingresada. Respuesta función: %d\n", caracter, cantidadApariciones, cantidadApariciones);
    }
    return 0;
}

int contarCaracter(char *array, char ch) /* definicion de la funcion */ {
    int contador = 0;
    while(*array != '\0'){
        if(ch == array[0]) {
            contador++;
        }
        array++;
    }
    if ( contador != 0) return contador;
    else return -1;                      /* Retorna el numero de veces que aparece ch en array o -1 si no aparece. */
}