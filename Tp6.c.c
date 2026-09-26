#include <stdio.h>
#define PI 3.14159265358979323846

float calcularAreaRectangulo(float longitud, float altura)
{
    return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura)
{
    return 2 * (longitud + altura);
}

float calcularAreaCirculo(float radio)
{
    return PI * radio * radio;
}

float calcularPerimetroCirculo(float radio)
{
    return 2 * PI * radio;
}

void imprimirResultados(const char *figura, float area, float perimetro)
{
    printf("El area del %s es: %.2f\n", figura, area);
    printf("El perimetro del %s es: %.2f\n", figura, perimetro);
}

int main(void)
{
    int opcion;
    float longitud, altura, radio, area, perimetro;

    
    do
    {
        printf("Ingrese la figura que quiera calcular (1: rectangulo, 2: circulo): ");
        if (scanf("%d", &opcion) != 1)
        {
            /* Entrada no numerica: se descarta la linea */
            int c;
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            opcion = 0;
        }
        if (opcion != 1 && opcion != 2)
        {
            printf("Opcion invalida. Intente de nuevo.\n");
        }
    } while (opcion != 1 && opcion != 2);

    if (opcion == 1)
    {
        printf("Opcion de rectangulo seleccionada\n");
        printf("Ingrese la longitud del rectangulo: ");
        scanf("%f", &longitud);
        printf("Ingrese la altura del rectangulo: ");
        scanf("%f", &altura);

        area = calcularAreaRectangulo(longitud, altura);
        perimetro = calcularPerimetroRectangulo(longitud, altura);
        imprimirResultados("rectangulo", area, perimetro);
    }
    else
    {
        printf("Opcion de circulo seleccionada\n");
        printf("Ingrese el radio del circulo: ");
        scanf("%f", &radio);

        area = calcularAreaCirculo(radio);
        perimetro = calcularPerimetroCirculo(radio);
        imprimirResultados("circulo", area, perimetro);
    }

    return 0;
}
