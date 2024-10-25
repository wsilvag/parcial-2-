/******************************************************************************

escribir mi nombre y regresa un caracter 

char[],,, es para cambiar a string

*******************************************************************************/
//ESCRIBIR MI NOMBRE Y REGRESAR UN CARACTER
/*#include <stdio.h>

char nombre(void);
int main()

{
    printf("%c",nombre());
    

    return 0;
}

char nombre(void)
{
    char usuario[45];
    printf("escribe tu nombre ");
    scanf("%s", usuario);
    return usuario[0];
    
    
    
}*/



/*
FUNCION QUE RECIBE CADENA Y TE DICE LA PRIMERA VOCAL 

#include <stdio.h>
char vocal(const char cadena[100]);

int main()
{
    printf("%c", vocal("walter"));
    printf("%c", vocal("platano"));
    return 0;
}

char vocal(const char cadena[100])
{
    for(int i=0; cadena[i]!='\0'; i ++ )
    {
        if (cadena [i]=='a' || cadena [i]=='e' || cadena [i]=='i' || cadena [i]=='o' || cadena [i]=='u')
        {
            return cadena[i];
        }
    }
}**/



//FUNCION QUE RECIBE DOS CADENAS Y REGRESA LA POSICION DONDE SON DIFERENTES
#include <stdio.h>

int posicion(const char cadena1[30], const char cadena2[30]);

int main()
{
    
    printf("%i\n",posicion("pato","perro"));
    printf("%i\n",posicion("platano", "plataforma"));
    return 0;
}

int posicion(const char cadena1[30], const char cadena2[30])
{

int i;
{
    for ( i=0; cadena1[i]!='\0'; i ++)
    {
        if (cadena1[i]==cadena2[i])
        {
            continue;
        }
        else
        { 
            break;
        }
        
    }
    return i;
}
}
