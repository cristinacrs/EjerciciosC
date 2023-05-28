#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

float rads(float grados){
	float radianes = grados * (PI/180);
	return radianes;
}

int main(){
	printf("Radianes: %f", rads(24));
	return 0;
}
