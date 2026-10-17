// Repositorio: https://github.com/Cokitoblindzzz/Trabajo-Pr-ctico-03-BMI-

#include <stdio.h>

#define TAM 5

#define COD_MIN 1L
#define COD_MAX 999999999L

void limpiarBuffer(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF)
		;
}

int main(void)
{
	long codigos[TAM];
	float precios[TAM];
	int i, leidos;
	int iMax, iMin;
	
	printf("Ingrese %d productos, se solicitará el código y precio:\n", TAM);
	
	for (i = 0; i < TAM; i++)
	{
		do
		{
			printf("Ingrese el código de barras (%ld-%ld): ", COD_MIN, COD_MAX);
			leidos = scanf("%ld", &codigos[i]);
			limpiarBuffer();
			
			if (leidos != 1 || codigos[i] < COD_MIN || codigos[i] > COD_MAX)
			{
				printf("Error. El código de barras debe estar entre %ld y %ld\n",
					   COD_MIN, COD_MAX);
				leidos = 0;
			}
		} while (leidos != 1);
		
		do
		{
			printf("Ingrese el precio: ");
			leidos = scanf("%f", &precios[i]);
			limpiarBuffer();
			
			if (leidos != 1 || precios[i] < 0)
			{
				printf("Error. El precio debe ser un número mayor o igual a 0\n");
				leidos = 0;
			}
		} while (leidos != 1);
	}
	
	printf("\nCódigo Precio\n");
	for (i = 0; i < TAM; i++)
	{
		printf("%9ld %10.2f\n", codigos[i], precios[i]);
	}
	
	iMax = 0;
	iMin = 0;
	for (i = 1; i < TAM; i++)
	{
		if (precios[i] > precios[iMax])
			iMax = i;
		if (precios[i] < precios[iMin])
			iMin = i;
	}
	
	printf("\nMás caro: [%ld] %.2f\n", codigos[iMax], precios[iMax]);
	printf("Más barato: [%ld] %.2f\n", codigos[iMin], precios[iMin]);
	
	return 0;
}
