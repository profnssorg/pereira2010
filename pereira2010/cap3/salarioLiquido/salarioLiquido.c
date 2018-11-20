#include <stdio.h>


int main () {
   float horasTrabalhadas, salarioHora = 19.5, irpf = 0.25, desconto, salarioBruto, salarioLiquido;

   // Entrada de dados
   puts("Quantas horas você trabalhou?\n\n");
   scanf("%f", &horasTrabalhadas);

   // Cálculo do salario e do desconto

   salarioBruto = horasTrabalhadas*salarioHora;

   if(salarioBruto > 2500){

     salarioLiquido = salarioBruto*(1 - irpf);
   }
   else{
     salarioLiquido = salarioBruto;
   }

   desconto = salarioBruto - salarioLiquido;

   // Saída de dados

   printf("O salário líquido é igual a %.2f e o desconto de IRPF é igual a %.2f.\n\n", salarioLiquido, desconto);

   return(0);
}