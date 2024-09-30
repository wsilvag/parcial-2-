/******************************************************************************

Walter Silva Gaxiola


*******************************************************************************/
#include <stdio.h>
#define TRUE 1
void menu(void);
int valida_codigo(int codigo);

int main()
{
	int numero,costo, dinero,rest, continua;
	do {
		menu();
		printf("Ingresar codigo o dinero: ");
		scanf("%i", &numero);
		costo = valida_codigo(numero);
		if (costo==0)
		{
			dinero=numero;
			printf("Tu balance es de %i\n", dinero);
		}
		else
		{
			printf("El producto elegido vale $%i\n", costo);
			if (dinero!=0)
			{
				rest=dinero-costo;
				printf("Tu sobrante es $%i\n", rest);
			}
		}

	} while(TRUE);
	return 0;
}


void menu(void)
{
	printf(" 123 papas\n 345 coca\n 257 gansito\n 276 oreo\n");
}

int valida_codigo(int codigo)
{
	switch(codigo)
	{
	case 123:
		return 20;
	case 345:
		return 18;
	case 257:
		return 16;
	case 276:
		return 20;
	default:
		return 0;
	}
	return 0;
}