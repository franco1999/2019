#include <stdio.h>
#include <stdlib.h>

void mostrarArray(int tam, eProducto listado[]);
{
        for(i=0; i<tam; i++)
            {
                mostrarProducto[listado[i]];
            }
}

void cargarArray[int, eProducto[]];
{
    int i;

    for(i=0; i<tam; i++)
        {
            listado[i]=pedirProducto;
        }
}

eProducto pedirPrducto()
{
    eProducto  productoParaRetornar;

    printf["Ingrese codigoDeBarra "];
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("Ingrese nombre ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("Ingrese fechaDeVencimiento ");
    fflush(stdin);
    gets(productoParaRetornar.fechaDeVencimiento);

    printf("Ingrese precio ");
    scanf("%f", &productoParaRetornar.precio);

    print("Ingrese proveedor ");_
    fflush(stdin);
    gets(productoParaRetornar.proveedor);

    return productoParaRetornar;




    //return 0;

}

void mostratProducto[eProducto elParametroProducto]
{
    printf("\n\n\n \t\t<<<<< Producto >>>>>\n");
    printf("\nAtributo \t Valor ");
    printf("\n------------------------"|);
    printf("\nCodigo:\t %3", elParametroProducto.codigoDeBarra);
    printf("\nNombre:\t %3", elParametroProducto.nombre");
    printf("\nFech venc :\ %s \n\n",elParametroProducto.fechaDeVencimiento);
}

void construirArray[int, eProducto[]]
{
    int i;

    for(i=0; i<tam; i++)
        {
            listado[i]=0;
        }
}

int insertProducto[eProducto[]];
int dameLugarLibre[eProducto]);
int existeProducto[eProducto, eProducto[]);
int borrarProducto[eProducto, eProducto[]);
int editarProducto[eProducto, eProducto[]);

int insertProducto[eProducto elProducto, eProducto listado[])
{
    int indice;
    indice=dameLugarLibre(listado);
    if(indice!=1)
        {
            listado[indice]=eProducto;
        }
    return indice;
}
int borrarProducto(eProducto elProducto,eProducto listado[])
{
    int indice;
    indice=existeProducto(elProducto, listado);
    if(indice!=1)
        {
            listado[indice].estado=-1;
        }
    return indice;
}
