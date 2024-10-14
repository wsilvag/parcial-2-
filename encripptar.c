/******************************************************************************

encriptar frase 

*******************************************************************************/
#include <stdio.h>

int main()
{   
    char frase[200]="Guadalajara es la perla Tapatía";
    for (int pos=0;frase[pos]!='\0' ;pos++)
    {
        if (frase [pos]==' ')// if (frase[pos]>='a'&&frase[pos]<='Z');
            continue;
        frase[pos]=frase[pos]+1;
    }
    printf("%c", frase [0]);

    return 0;
}