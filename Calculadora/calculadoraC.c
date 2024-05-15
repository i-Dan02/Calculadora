/*/

Calculadora em C

IGOR DANIEL, estudante de Ciência da Computação da UESC

 /*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  float valor1, valor2;
  int operador;
  float res;

  printf("Digite o primeiro valor: ");
  scanf("%f", &valor1);
  printf("Digite o segundo valor: ");
  scanf("%f", &valor2);

  if (valor2 == 0){
    printf("Os operadores possíveis para realizar os cálculos são: \n1 - Soma\n2 - Subtração\n3 - Multiplicação\n");
    }
  else
    printf("Os operadores possíveis para realizar os cálculos são: \n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
  
  printf("Digite o operador: ");
  scanf("%d", &operador);
  
  while (operador == 0){
    printf( "Operador inválido, digite novamente: ");
    scanf("%d", &operador);
  }

  while ( valor2 == 0 && operador == 4 ){
    printf( "Operação não disponível para esses valores, digite novamente: ");
    scanf("%d", &operador);
  }

  while ( operador < 1 || operador > 6 ){
    printf("Operador inválido, digite novamente: ");
    scanf("%d", &operador);
  }
  
  if (operador == 1){
    res = valor1 + valor2;
  }

  if (operador == 2){
    res = valor1 - valor2;
  }

  if (operador == 3){
    res = valor1 * valor2;
  }

  if (operador == 4){
    res = valor1 / valor2;
  }

  if (operador == 5){
   int n;
   res = pow(valor1, 2);

  if (operador == 6){
   int n;
   int expoente = 0;
   printf("\nDigite o número que deseja calcular a raiz: ");
      scanf("%d", &n);
      printf("\nDigite o expoente da raiz: ");
      scanf("%d", &expoente);

      double resultado = pow(n, 1.0 / expoente);
    }

  printf("O resultado é: %.2f", res);
}
