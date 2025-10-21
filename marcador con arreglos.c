#include <stdio.h>

int main() {
    int resultados[6] = {2, 1, 3, 0, 4, 2}; // Arreglo inicializado
    int opcion, i, partido;
    float promedio;
    int suma;

    do {
        printf("\n-----------------------------------------\n");
        printf(" ¿Que quieres hacer?\n");
        printf(" 1) Mostrar todos los resultados\n");
        printf(" 2) Mostrar resultado de un partido en especifico\n");
        printf(" 3) Modificar todos los resultados\n");
        printf(" 4) Modificar resultado de un partido en especifico\n");
        printf(" 5) Mostrar estadistico (promedio de goles por partido)\n");
        printf(" 0) Salir\n");
        printf("-----------------------------------------\n");
        printf(" Ingresa una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("\nResultados de los 6 partidos:\n");
                for(i = 0; i < 6; i++) {
                    printf("Partido %d: %d goles\n", i+1, resultados[i]);
                }
                break;

            case 2:
                printf("\nIngresa el numero de partido (1-6): ");
                scanf("%d", &partido);
                if(partido >= 1 && partido <= 6) {
                    printf("Resultado del partido %d: %d goles\n", partido, resultados[partido-1]);
                } else {
                    printf("Numero de partido inválido.\n");
                }
                break;

            case 3:
                printf("\nModificando todos los resultados:\n");
                for(i = 0; i < 6; i++) {
                    printf("Nuevo resultado para partido %d: ", i+1);
                    scanf("%d", &resultados[i]);
                }
                printf("Resultados actualizados correctamente.\n");
                break;

            case 4:
                printf("\nIngresa el numero de partido a modificar (1-6): ");
                scanf("%d", &partido);
                if(partido >= 1 && partido <= 6) {
                    printf("Resultado actual: %d\n", resultados[partido-1]);
                    printf("Ingresa nuevo resultado: ");
                    scanf("%d", &resultados[partido-1]);
                    printf("Resultado actualizado correctamente.\n");
                } else {
                    printf("Numero de partido inválido.\n");
                }
                break;

            case 5:
                suma = 0;
                for(i = 0; i < 6; i++) {
                    suma += resultados[i];
                }
                promedio = (float)suma / 6;
                printf("\nPromedio de goles por partido: %.2f\n", promedio);
                break;

            case 0:
                printf("\nSaliendo del programa...\n");
                break;

            default:
                printf("\nOpción no válida. Intenta de nuevo.\n");
                break;
        }

    } while(opcion != 0);

    return 0;
}
