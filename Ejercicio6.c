#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

float rads(float grados){
	float radianes = grados * (PI/180);
	return radianes;
}

int main(){
	
	float grados;
	
	printf("Ingresa los grados: ");
	scanf("%f", &grados);
	printf("Radianes: %f", rads(grados));
	return 0;
}
