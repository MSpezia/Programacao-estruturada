#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float calculoPotencia(float x, int n);
int main(){
	float x, potencia;
	int n;
	
	printf("Digite x: ");
	scanf("%f", &x);
	printf("Digite n: ");
	scanf("%d", &n);
	
	potencia = calculoPotencia(x ,n);
	printf("Resposta: %f", potencia);
	
	
	return 0;
}
float calculoPotencia(float x, int n){
	return pow(x,n);
}
