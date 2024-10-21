/******************************************************************************

encriptar avvbeecedario

***************************************************************/
#include <stdio.h>
void encriptar (char frase[100], char abc[30]);

int main()
{   
    //char abc1[]="abcdefghijklmnopqrstuvwxyz";
    char abc2[]="%@c&wXo!yz*j@vBL7q#I_3Kdpen";
    char frase[200]="Guadalajara es la perla Tapatía";
    
    encriptar(frase, abc2);
    printf("%s\n", frase);
    desencriptar(frase,abc2);
    printf("%s", frase);
    
    return 0;
}

void desencriptar (char frase[100], char abc[30])
{
    for (int pos=0;frase[pos]!='\0' ;pos++)
    {
        int letra=frase[pos];
        for (int lugar=0;abc[lugar]!='\0' ;lugar++)
        {
            if (abc[lugar]==letra )
                frase[pos]=lugar+97;
        }
    } 
}

void encriptar (char frase[100], char abc[30])
{
    for (int pos=0;frase[pos]!='\0' ;pos++)
    {
        int resta=frase[pos]-97;
        if (frase [pos]>='a' && frase[pos]<='z')
            frase[pos]=abc[resta]; //frase[pos]+1
    } 
}
