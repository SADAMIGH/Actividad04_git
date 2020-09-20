#include<stdio.h>
#include<stdlib.h>

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

        switch (opc)
        {
            case '1':
            capturar_enteros();
                break;
            case '2':
                break;
            case '3':
                break;
            default:
                break;       
        }

        fflush(stdin);
    }while(opc != '0');
    

    
    return 0;
}
 

