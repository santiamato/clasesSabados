/******************************************************************************
se ingresan 10 numeros y 10 letras.
Se necesita saber:
a) promedio de numeros
b) cantidad de vocales (cuantas a, cuantas e....)
c) de la letra a, el valor mas grande
d) el factor de todos los numeros ingresados
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	char letra;

	for(int i = 0; i < 10; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numero);

		fflush(stdin);
		printf("Ingrese una letra: ");
		scanf("%c", &letra);
	}



	return EXIT_SUCCESS;
}
