#include <stdio.h>

int contarCaracter(char *array, char ch); /* prototipo de funcion */
int obtenerIndice(char *array, char ch);  /* prototipo de funcion */

int main() {
    char caracter;
    char cadena[100];
    int cantidadApariciones, indice;
    printf("Ingrese la cadena de caracteres: ");
    scanf("%s", cadena);
    printf("Ingrese el caracter a buscar: ");
    scanf(" %c", &caracter);
    cantidadApariciones = contarCaracter(cadena, caracter); /* llamada a la funcion */
    indice = obtenerIndice(cadena, caracter);               /* llamada a la funcion */
    if(cantidadApariciones == -1) {
        printf("El caracter %c no se encuentra en la cadena. Respuesta de la función: %d\n", caracter, indice);
    } else {
        printf("La primera aparición del caracter %c se encuentra en el subindice %d de la cadena ingresada. Respuesta función: %d\n", caracter, indice, indice);
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

int obtenerIndice(char *array, char ch) /* definicion de la funcion */ {
    int contador = 0;
    while(*array != '\0'){
        if(ch == array[0]) {
            return contador;
        }
        contador++;
        array++;
    }
    return -1;                            /* Retorna el indice de la primera aparicion de un caracter en un array. */
}