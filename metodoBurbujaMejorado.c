#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define MAX 20000


void bubbleSort(int [], int);
void generarNumeros(int [], int);


int main() {
	int i,j;
	int vector[MAX];
	
	generarNumeros(vector, MAX);
	
	bubbleSort(vector, MAX);
	
	printf("\n\n");
	for(i = 0; i < MAX; i++){
		printf("-%d", vector[i]);
	}
	
	return 0;
}
void generarNumeros(int vec[], int n){
	srand(time(NULL));
	int i;
	for(i = 0; i < n; i++){
		vec[i] = rand() % 20000;
	}
}


void bubbleSort(int vec[], int n){
	int i,j,aux, ciclos = 0;
	bool bandera = false;
	for(i = 0; i < n && bandera == false; i++){
		bandera = true;
		for(j = 0; j < (n-1); j++){
			if(vec[j] > vec[j+1]){
				bandera = false;
				aux = vec[j];
				vec[j] = vec[j+1];
				vec[j+1] = aux;
			}
		}
		ciclos++;
		n--;
	}
	printf("ciclos: %d\n\n", ciclos);
}
