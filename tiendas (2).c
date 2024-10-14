/******************************************************************************
GRAFICA DE BARRAS
++ = 1
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "conio.h"
#define MAX 50 
#define MAX_CAJAS 15
#define MIN_CAJAS 3
void rellena(int min, int max, int t[MAX]);
void barra(int x, int y, int altura);
void pinta_grafica(int dia, int tiendas[MAX]);

int main()
{
    int tiendas[MAX];
    srand(time(NULL));
    
    rellena(MIN_CAJAS,MAX_CAJAS,tiendas);
    pinta_grafica(1,tiendas);
   
    return 0;
}
void pinta_grafica(int dia, int tiendas[MAX])
{
    gotoxy(25,2);
    switch (dia)
    {
        case 1: printf("Lunes"); break;
        case 2: printf("Martes"); break;
        case 3: printf("Miercoles");break;
        case 4: printf("Jueves"); break;
        case 5: printf("Viernes"); break;
        case 6: printf("Sabado"); break;
    }
    for (int cont=0;cont<MAX;cont++)
    {
        barra(5+cont,20,tiendas[cont]);
    }
    textcolor(LIGHTGRAY);
}
    
    
void barra(int x, int y, int altura)
{
    for(int i=0;i<altura;i++,y--)
    {
    gotoxy(x,y);
    textcolor(altura);
    cprintf("*");
    }
}

void rellena(int min, int max, int t[MAX])
{
    for(int i=0;i<MAX;i++)
    {
        t[i]=rand()%max-1+min;
        //printf("%i ",t[i]);
    }
}
