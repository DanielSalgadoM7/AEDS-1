/*Crie um programa em C que:
a) Aloque dinamicamente 5 números inteiros
b) Peça para o usuário digitar os 5 números e armazene no espaço alocado
c) Imprima os endereços onde foram armazenados os 5 números
d) Realoque um espaço para digitais mais 5 números inteiros
e) Peça para o usuário digitar novos 5 números e armazene no novo espaço alocado
f) Imprima os endereços onde foram armazenados os 10 números
g) Mostre na tela os 10 números
h) Libere a memória alocada.*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
 
  }

  // Imprima os endereços onde foram armazenados os 5 números
  for (i = 0; i < 5; i++) {
    printf("\nEndereço %d = %p\n\n", i + 1, ptr + i);
  }

  // Realoque um espaço para digitais mais 5 números inteiros
  ptr = (int *)realloc(ptr, 10 * sizeof(int));

  // Peça para o usuário digitar novos 5 números e armazene no novo espaço
  // alocado
  printf("\nDigite mais 5 numeros: \n");
  for (i = 5; i < 10; i++) {
    scanf("%d", &ptr[i]);
  }

  // Imprima os endereços onde foram armazenados os 10 números
  printf("\nEndereços: \n");
  for (i = 0; i < 10; i++) {
    printf("\n%p\n\n", &ptr[i]);
  }

  printf("\n\n");

  // Mostre na tela os 10 números
  printf("\nTodo os numeros: \n");
  for (i = 0; i < 10; i++) {
    printf("\n%d\n", ptr[i]);
  }

  free(ptr);

  return 0;
}
