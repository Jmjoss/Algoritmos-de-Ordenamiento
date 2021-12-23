#include <stdio.h>
#define MAX 10

typedef int tVector[MAX];

void cargarVector(tVector, int);
void ordenamientoInsercion(tVector, int);
void mostrarVector(tVector, int);

tVector vectorPrueba;

int main() {
	
	cargarVector(vectorPrueba, MAX);
	
	mostrarVector(vectorPrueba, MAX);
	
	ordenamientoInsercion(vectorPrueba, MAX);

	printf("\n\n\n");
	mostrarVector(vectorPrueba, MAX);
	return 0;
}

void cargarVector(tVector vector, int max) {
	int i;
	for(i = 0; i < max; i++) {
		printf("\nIngrese el valor %d: ", i+1);
		scanf("%d", &vector[i]);
	}
}

void ordenamientoInsercion(tVector vector, int max){
	int i, j, aux;
	for(i = 1; i < max; i++){
		j = i;
		aux = vector[i];
		while(j > 0 && aux < vector[j-1]){
			vector[j] = vector[j-1];
			j--;
		}
		vector[j] = aux;
	}
}

void mostrarVector(tVector vector, int max){
	int i;
	for(i = 0; i < max; i++) {
		printf("%d -- ", vector[i]);
	}
}




