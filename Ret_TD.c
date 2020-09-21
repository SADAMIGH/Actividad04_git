#include<stdio.h>
#include<stdlib.h>
#include"personaje.h"

void capturar_enteros (){

int n, datos[5];
float sum_prom=0;

    for(n=0; n<=4; n++)
    {
        printf("Introduce el numero %d: ", n+1);
        scanf("%d", &datos[n]);
    } 
    printf("\nLos numeros introducidos son: ");
    for(n=0; n<=4; n++)
    {
        printf("%d, ",datos[n]);
        sum_prom=sum_prom+datos[n];
    }
    printf("\nEl resultado de sumar los numeros introducidos es: %.0f\n",sum_prom);
    sum_prom=sum_prom/(n);
    printf("El promedio de los numeros introducidos es: %.2f\n\n",sum_prom);

}

void mostrar (int n, int elementos_in, char arreglo[])
{
    printf("El arreglo se mostrara %d veces\n",n);
    int m=0;
    for(m;m<n;m++)
    {
        printf("Arreglo %d: ",m+1);
        int p=0;
        for(p;p<elementos_in;p++)
        {
            printf("%c",arreglo[p]);
        }
        printf("\n");
    }
    printf("\n");
}

int main (int argc, char*argv[])
{
    char opc;
    int elementos_in, n=0;
    char arreglo[50];
    do
    {
        printf("1) Capturar enteros\n");
        printf("2) Mostrar cadena n veces\n");
        printf("3) Agregar personaje\n");
        printf("0) Salir\n");
        scanf("%c", &opc);

        switch (opc)
        {
            case '1':
            capturar_enteros();
                break;
            case '2':
    printf("Cuantos elementos quieres introducir?: ");
    scanf("%d",&elementos_in);
    for(n;n<elementos_in;n++)
    {
        printf("Dame el elemento %d: ",n+1);
        scanf("%s",&arreglo[n]);
    }
    printf("\nCuantas veces quieres mostrar el arreglo?: ");
    scanf("%d",&n);
 
    mostrar(n,elementos_in,arreglo);
    
                break;
            case '3':
            capturar_personaje();
                break;
            default:
                break;       
        }

        fflush(stdin);
    }while(opc != '0');

    return 0;
}
 

