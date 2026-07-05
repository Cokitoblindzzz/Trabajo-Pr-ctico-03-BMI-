#include <stdio.h>

int main(void) {
	float peso;
	float altura;
	float mc;
	printf("Ingrese el peso en kg: ");
	scanf("%f", &peso);
	printf("Ingrese la altura en metros: ");
	scanf("%f", &altura);
	mc= peso / (altura * altura);
	printf("Su indice de masa corporal el de: %.2f \n", mc);
	printf("    Indice    |  Condicion\n");
	printf("-----------------------------\n");
	printf("    <18.5     |  Bajo peso\n");
	printf(" 18.5 a 24.9  |  Normal\n");
	printf(" 25.0 a 29.9  |  Sobrepeso\n");
	printf("     >=30     |  Obesidad\n");
	
	if (mc < 18.5) {
        printf("Usted se encuentra en la condicion: Bajo peso\n");
    }
    else if (mc < 25.0) {
        printf("Usted se encuentra en la condicion: Normal\n");
    }
    else if (mc < 30.0) {
        printf("Usted se encuentra en la condicion: Sobrepeso\n");
    }
    else {
        printf("Usted se encuentra en la condicion: Obesidad\n");
    }
	
	return 0;
}

