#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20000


void bubbleSort(int [], int);
void generarNumeros(int[], int);


int main() {
	
	int vector[MAX];
	
	generarNumeros(vector, MAX);
	
	bubbleSort(vector, MAX);
	
	int i;
	
	for(i = 0; i < MAX; i++){
		printf("-%d", vector[i]);
	}
	
	return 0;
}

void generarNumeros(int vec[], int n){
	srand(time(NULL));
	int i;
	for(i = 0; i < n; i++){
		vec[i] = rand() % (1-200+1) + 200;
	}
}

void bubbleSort(int vec[], int n){
	int i,j,aux, ciclos = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < (n-1); j++){
			if(vec[j] > vec[j+1]){
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
