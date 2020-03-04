#include <stdio.h>
#include <ctype.h>

/* Funciones de test */
void testVolverMayuscula(void);
void testEsLetra(void);
void testStringToMayuscula(void);

/* Funciones del programa */
int esLetra(char ch);
void volverMayuscula(char *ch);
void stringToMayuscula(char s[]);

int main(void) {
    char cadena[100];
    int ch = 0;
    printf("Entrada > ");
    scanf("%100s",cadena);
    while (1){
        while((ch = getchar()) != EOF){            
            stringToMayuscula(cadena);
            printf("%s\n", cadena);
            printf("Entrada > ");
            scanf("%100s",cadena);
        }
    }

    /*testVolverMayuscula();
    testEsLetra();
    testStringToMayuscula();*/
    return 0;
}

void testVolverMayuscula(void) {
  char *p_char;
  char l1 = 'a', l2 = 'z';
  p_char = &l2;
  printf("Minusculas -> %c, %c\n", l1, l2);
  volverMayuscula(&l1);
  volverMayuscula(p_char);
  printf("Mayusculas -> %c, %c\n", l1, *p_char);
}

void testEsLetra(void) {
  char c1 = '!', c2 = 's';
  printf("%c -> %d\n", c1, esLetra(c1));
  printf("%c -> %d\n", c2, esLetra(c2));
}

void testStringToMayuscula(void) {
  char s1[] = "hola que mas!!!\n";
  char s2[] = "1234 e_-+!!hay";
  printf("Cadenas en minuscula -> \n");
  printf("cadena 1: %s\n", s1);
  printf("cadena 2: %s\n", s2);
  stringToMayuscula(s1);
  stringToMayuscula(s2);
  printf("\nCadenas en mayuscula -> \n");
  printf("cadena 1: %s\n", s1);
  printf("cadena 2: %s\n", s2);
}

int esLetra(char ch);
void volverMayuscula(char *ch);
void stringToMayuscula(char s[]);

int esLetra(char ch) {
  if(isalpha(ch)){
        return 1;
    }
    return 0;
}

void volverMayuscula(char *ch) {
    *ch = toupper(*ch);
}

void stringToMayuscula(char s[]) {
    for (int i = 0; s[i] != '\0'; ++i){
        if (esLetra(s[i]) == 1){
            volverMayuscula(&s[i]);
        }
    }
}
