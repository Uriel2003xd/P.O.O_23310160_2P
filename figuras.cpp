#include <stdio.h>
#include <math.h>

// Prototipos de funciones
float calcularAreaCirculo(float radio);
float calcularAreaCuadrado(float lado);
float calcularAreaRectangulo(float base, float altura);
float calcularAreaTriangulo(float base, float altura);

int main() {
    int opcion;
    
    do {
        // Menú de opciones
        printf("\nSeleccione una figura para calcular el area:\n");
        printf("1. Circulo\n");
        printf("2. Cuadrado\n");
        printf("3. Rectangulo\n");
        printf("4. Triangulo\n");
        printf("0. Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        // Variables comunes a varias opciones
        float base, altura, radio, lado;

        switch (opcion) {
            case 1:
                // Círculo
                printf("Ingrese el radio del circulo: ");
                scanf("%f", &radio);
                printf("El area del circulo es: %.2f\n", calcularAreaCirculo(radio));
                break;

            case 2:
                // Cuadrado
                printf("Ingrese el lado del cuadrado: ");
                scanf("%f", &lado);
                printf("El area del cuadrado es: %.2f\n", calcularAreaCuadrado(lado));
                break;

            case 3:
                // Rectángulo
                printf("Ingrese la base del rectangulo: ");
                scanf("%f", &base);
                printf("Ingrese la altura del rectangulo: ");
                scanf("%f", &altura);
                printf("El area del rectangulo es: %.2f\n", calcularAreaRectangulo(base, altura));
                break;

            case 4:
                // Triángulo
                printf("Ingrese la base del triangulo: ");
                scanf("%f", &base);
                printf("Ingrese la altura del triangulo: ");
                scanf("%f", &altura);
                printf("El area del triangulo es: %.2f\n", calcularAreaTriangulo(base, altura));
                break;

            case 0:
                // Salir
                printf("Saliendo del programa. ¡Hasta luego!\n");
                break;

            default:
                printf("Opción no válida. Por favor, ingrese una opción válida.\n");
        }

    } while (opcion != 0);

    return 0;
}

// Implementación de funciones

float calcularAreaCirculo(float radio) {
    return M_PI * pow(radio, 2);
}

float calcularAreaCuadrado(float lado) {
    return pow(lado, 2);
}

float calcularAreaRectangulo(float base, float altura) {
    return base * altura;
}

float calcularAreaTriangulo(float base, float altura) {
    return 0.5 * base * altura;
}