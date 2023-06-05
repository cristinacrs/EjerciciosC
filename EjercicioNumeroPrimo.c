#include <stdio.h>
#include <stdbool.h>

int Primo(int a){
	int i;

	
	 for (i = 2; i < a; i++) {
	  if (a % i == 0) {
	 		return false;
	   }else{
	   		return true;
	   }
	 }
	
}

int main(){
	
	int a;
	
	printf("Ingresa el numero: ");
	scanf("%f", &a);
	
	printf("El numero es primo: %d", Primo(a));
	
}
