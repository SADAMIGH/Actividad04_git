#include<stdio.h>
#include<stdlib.h>


int main ()
{
    char opc;
    do
    {
        printf("1) Capturar enteros\n");
        printf("2) Mostrar cadena n veces\n");
        printf("3) Agregar personaje\n");
        printf("0) Salir\n");
        scanf("%c", &opc);
        fflush(stdin);
    }while(opc != '0');
    
    return 0;
}
 

