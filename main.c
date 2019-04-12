#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#define TAM 4

// HACER : funcion que permita modificar los datos del alumno. ej legajo.

void getString(char mensaje[], char imput[]);
void getStringLetras(char mensaje[], char imput[]);
void gesStringNumeros(char mensaje[], char imput[]);

void mostrarAlumnos(char[][50], char[][50], int nota[], int edad [], int tamanio);
void ordenarAlumnos(char[][50], char[][50], int nota[], int edad [], int tamanio);

int main()
{
    char apellidos(TAM)[50]={"Rial", "Menor", "Mayor", "Gomes"};
    char nombres(TAM)[50]={"Jorge", "Matias", "Roberto", "Alberto"};
    int edad[TAM]={56, 30, 15, 12};
    int nota[TAM]=(6, 8, 9);
    char mail[][30];
    int i;
    int j;
    printf("10%s\t10%s\t%s\t%s\n", "nombre", "apellido", "edad", "nota")


    return 0;
}
void ordenarAlumnos(char nombre[][50], char apellidos)
{
    char auxCadena[50];
    int i, j;
    for (i=0; i<tam-1; i++)
        {
            for(j=i+1; j<tam, j++)
                {
                    if(strcpy(nombre[i], nombre[j])>1)
                        {
                            strcpy(auxCadena), nombre[i]);
                            strcpy(nombre[i]), nombre[j]);
                            strcpy(nombre[j], auxCadena);

                            strcpy(auxCadena), apellidos[i]);
                            strcpy(apellidos[i]), apellidos[j]);
                            strcpy(apellidos[j], auxCadena);

                            auxEntero= edad[i];
                            adad[i]= edad[j];
                        }
                }
        }
}







/*V ----  simples (int, floor, char )
   \
    \
     \
      compuestos - - - arrays ---- unidm
                 \
                  \
                   estructuras
                   */
