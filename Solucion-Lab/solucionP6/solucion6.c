#include <stdio.h>
#include <string.h>

void shellMethodSorting(int a[], int n); /* prototipo de funcion */
void mediana(int a[], int n);
void testMediana(void);

int main() {
    testMediana();
    return 0;
}

void mediana(int a[], int n) /* definicion de la funcion */ {
    int mediana;
    mediana = ((n-1)/2);
    printf("Vector ordenado: ");
    for (int i = 0; i < n; i++){
        printf(" %d", a[i]);
    }
    printf("\nLa mediana corresponde a: %d \n", a[mediana]);          /* Retorna la mediana de un vector impar */    
}

void shellMethodSorting(int a[], int n) /* definicion de la funcion */ {
    int intervalo, i, j, k;
    intervalo = n/2;
    while (intervalo > 0) {
        for(i = intervalo; i < n; i++) {
            j = i - intervalo;
            while (j >= 0){
                k = j + intervalo;
                if (a[j] <= a[k]){
                    j = -1;
                } else {
                    int temp;
                    temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                    j = j - intervalo;
                }
            }

        }
        intervalo = intervalo/2;
    }
    
}

void testMediana(void) /* definicion de la funcion */ {
    int a[] = {1, 9, 7, 2, 3, 5, 8};
    int n = *(&a + 1) - a;

    printf("Vector: ");
    for (int i = 0; i < n; i++){
        printf(" %d", a[i]);
    }
    printf("\n");
    shellMethodSorting(a, n);
    mediana(a, n);    
}