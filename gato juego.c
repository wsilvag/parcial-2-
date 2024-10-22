/******************************************************************************

JUEGO DEL GATO CONTRA COMPUTADORA

*******************************************************************************/
#include <stdio.h>
void tablero_gato(char gato[10]);//10 posicion porq 9 del gato y 1 del fin de linea
void responder(int p, char g[10]);
int validar_ganador(char gato[10]);

int main()
{
    char gato[10]="123456789";
    int pos, ganador=0;
    do{
        tablero_gato(gato);
        printf("donde tiras? ");
        scanf("%i",&pos);
        gato[pos-1]='x';
        ganador=validar_ganador(gato);
        responder(pos,gato);
        ganador=validar_ganador(gato);
    }while (ganador==0);
    printf("felicidades ganaste capitan \n");
    return 0;
    
}

int validar_ganador(char gato[10])
{
    if(gato[0]==gato[4]&& gato[4]==gato[8])
    return 1;
    else
    return 0;
}

void responder(int p, char g[10])
{
    if (p==5)
        g[2]='0';
    else if (p==2)
        g[6]='0';
}

void tablero_gato(char gato[10])
{
    printf("       *     *     \n");
    printf("  %c    *  %c  *    %c \n", gato[0],gato[1],gato[2]);
    printf("       *     *     \n");
    printf("*********************\n");
    printf("       *     *     \n");
    printf("  %c    *  %c  *    %c \n", gato[3],gato[4],gato[5]);
    printf("       *     *     \n");
    printf("*********************\n");
    printf("       *     *     \n");
    printf("  %c    *  %c  *    %c \n", gato[6],gato[7],gato[8]);
    printf("       *     *     \n");
    printf("*********************\n");
}
