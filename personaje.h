#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<stdlib.h>
#include<stdio.h>

struct personaje{
       char nombre [40];
       char tipo [40];
       int fuerza;
       int salud;
}personajes[5];

void capturar_personaje()
{
    int n;
    printf("Cuantos personajes quieres ingresar?\n");
    printf("(Solo puedes ingresar de 1 a 5 personajes)\n");
    scanf("%d",&n);
    if(n>5)
    {
        n=5;
    }
    else if(n<1)
    {
        n=1;
    }
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nIngresa el nombre del personaje %d: \n",i+1);
        scanf("%s",&personajes[i].nombre);
        printf("Ingresa el tipo de personaje del personaje %d: \n",i+1);
        scanf("%s",&personajes[i].tipo);
        printf("Ingresa la fuerza del personaje %d: \n",i+1);
        scanf("%d",&personajes[i].fuerza);
        printf("Ingresa la salud del personaje %d: \n",i+1);
        scanf("%d",&personajes[i].salud);
    }
    printf("\n");
    printf("Datos de los personajes ingresados\n\n");
    for(i=0;i<n;i++)
    {
        printf("Personaje numero %d\n",i+1);
        printf("Nombre: %s\n",personajes[i].nombre);
        printf("Tipo: %s\n",personajes[i].tipo);
        printf("Fuerza: %d\n",personajes[i].fuerza);
        printf("Salud: %d\n",personajes[i].salud); 
        printf("\n");
    }
}

#endif 