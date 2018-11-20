#include <stdio.h>
# include <math.h>
#include <stdlib.h>

#include <stdio.h>
# include <math.h>



int main(){

	float imc, altura, massa;
	char obeso[6] = "obeso";
	
	
	// Entrada de dados
	
	puts("Informe seu peso (em kilogramas) e sua altura (em metros) respectivamente.");
	scanf("%f %f", &massa, &altura);
	
	// Cálculo do IMC
	
	imc = massa/pow(altura, 2);
	
	
	// Saída de dados
	
	if (imc > 30){
	
		printf("Seu IMC é igual a %f, logo você está obeso.\n", imc);
	}
	else{
	
		printf("Seu IMC é igual a %f, logo você não está obeso.\n\n", imc);
	}	
	
	
	
}
