// Librerías
#include <stdio.h>
#include <stdlib.h>

// Función principal
int main() {
  // Colores
  system("color 5f");

  // Título con marco
  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%"
         "c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175);
  printf("%c Programa 7 creado por: Avila Barba Erick Yahir %c\n", 175, 175);
  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%"
         "c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175,
         175, 175, 175, 175, 175, 175, 175, 175);

  // Solicitar nombre
  char nombre_usuario[20];

  printf("%cHola! Ingresa tu nombre, por favor:\n", 173);
  gets(nombre_usuario);
  printf("\n\n");

  // Solicitar cantidades
  int cantidad1, cantidad2, cantidad3;
  float cantidad4, cantidad5;

  printf("1. Ingresa una cantidad entera, por favor:\n");
  scanf("%d", &cantidad1);
  printf("\n");

  printf("2. Ingresa una cantidad entera, por favor:\n");
  scanf("%d", &cantidad2);
  printf("\n");

  printf("3. Ingresa una cantidad entera, por favor:\n");
  scanf("%d", &cantidad3);
  printf("\n");

  printf("4. Ingresa una cantidad decimal, por favor:\n");
  scanf("%f", &cantidad4);
  printf("\n");

  printf("5. Ingresa una cantidad decimal, por favor:\n");
  scanf("%f", &cantidad5);
  printf("\n");

  printf("Gracias :D\n\n\n");

  // Calcular promedio
  float media_aritmetica =
      (cantidad1 + cantidad2 + cantidad3 + cantidad4 + cantidad5) / 5;

  // Mostrar resultados
  printf("Su nombre es: %s\n", nombre_usuario);
  printf("Las cantidades ingresadas son: %d, %d, %d, %.3f, %.3f\n", cantidad1,
         cantidad2, cantidad3, cantidad4, cantidad5);
  printf("La aritm%ctica es: %.3f\n\n\n", 130, media_aritmetica);

  // Mensaje final
  printf("Gracias por usar este programa :D");

  return 0;
}
