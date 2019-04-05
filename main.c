#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombre[6];
    char otroNombre[50]="Jose Perez"
    int compara;

    //strcpy(nombre,otroNombre);
    //strncpy(nombre,otroNombre,5);
    printf("Su nombre es: %s", nombre);
    //fgets(nombre, 48, stdin);           //50=>cantidad de caracteres que lee
    scanf("%[^\n]", nombre);
    //gets(nombre);
    //largo = strlen(nombre);
    //printf("%d", largo);

    compara = strcmp(nombre, "pepe");
    printf("%d", compara);

    return 0;
}
