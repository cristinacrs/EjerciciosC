#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randomList(int n, int m){
	
	int i, r;
	
	int randomNumbers[n];
	
	for(i=1; i< n; i++){
		r = rand()% 50;
		
		randomNumbers[i] = r;
	}
	
	
	printf("Arreglo aleatorio: ");
	for (i = 0; i <= n ;i++) {
  		printf("%d ", randomNumbers[i]);
  		if(i == n){
  			printf("\n");
		}
	}
	
	for (i = 0; i <= n ;i++) {
  		if(m == randomNumbers[i]){
  			printf("Valor %d encontrado en el arreglo", m);
		}
	}
	

	return 0;
	
}

int main(){
	
	srand(time(NULL));
	int m, n;
	
	printf("Tamanio del arreglo: ");
	scanf("%d", &n);
	printf("Numero a buscar: ");
	scanf("%d", &m);
	
	randomList(n,m);
}
