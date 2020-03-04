#include <stdio.h>
#include <string.h>

char *obtenerSubcadena(char *array, int index); /* prototipo de funcion */

int main() {
    int indice;
    char cadena[100];
    char *subCadena;
    printf("Ingrese la cadena de caracteres: ");
    scanf("%s", cadena);
    printf("Ingrese el subindice: ");
    scanf("%d", &indice);
    subCadena = obtenerSubcadena(cadena, indice); /* llamada a la funcion */
    printf("Subcadena generada: %s\n", subCadena);
    
    return 0;
}

char *obtenerSubcadena(char *array, int index) /* definicion de la funcion */ {
    int contador = 0;
    if(index < strlen(array)){
        while(contador < index){
        array ++;
        contador ++;
        }       
    }
    return array;                      /* Retorna una subcadena a tomada a partir de un subindice asociado a una subcadena. */
}