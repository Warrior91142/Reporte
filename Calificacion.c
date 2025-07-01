#include <stdio.h>
#include <cs50.h>
int main(int argc, string argv [])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv [i]);
    }

    float cal1, cal2,cal3, promedio;

    // Calificaciones
    printf("Ahora calculemos el promedio de 3 calificaciones.\n");

    printf("Ingresa la primera calificación (1 a 10):\n");
    scanf("%f", &cal1);

    printf("Ingresa la segunda calificación (1 a 10):\n");
    scanf("%f", &cal2);

    printf("Ingresa la tercera calificación (1 a 10):\n");
    scanf("%f", &cal3);

    // Calcular promedio
    promedio = (cal1 + cal2 + cal3) / 3;
    printf("El promedio es: %.2f\n", promedio);

    return 0;

}
