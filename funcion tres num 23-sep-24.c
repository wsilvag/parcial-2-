/******************************************************************************

funcion que recibe tres numero y devuelve el mayor de ellos  

*******************************************************************************/
#include <stdio.h>
int mayor(int num1, int num2, int num3); //protoTIPO

int main()
{
    int res;
    res=mayor(300,-120, 410);
    printf("%i\n",res);
    
    res=mayor(30,-120, 18);
    printf("%i\n",res);
    
    res=mayor(-300,-120,-410);
    printf("%i\n",res);
    
    return 0;
}

int mayor (int num1, int num2, int num3)
{
    if (num1>num2&&num1>num3)
        return num1;
    else if (num2>num1&&num2>num3)
        return num2;
    else 
        return num3;
    
}