#include <stdio.h>
#include <string.h>

int main(void)
{
    // Variables
    char nombre[50];
    float cal1, cal2, cal3, promedio;

    // Leer nombre completo con espacios
    printf("¡Hola! ¿Cómo te llamas?\n");
    fgets(nombre, sizeof(nombre), stdin);

    // Eliminar el salto de línea que deja fgets
    nombre[strcspn(nombre, "\n")] = '\0';

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

    return 0;
}
