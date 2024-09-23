/******************************************************************************

funcion que recibe una letra y devuelve el ascii 

*******************************************************************************/
#include <stdio.h>
int ascii(char letra);

int main()
{
    int resultado=ascii('#');
    printf("%i\n",resultado);
    printf("%i\n",ascii('8'));
    return 0;
}

int ascii(char letra)
{
    return letra;
}