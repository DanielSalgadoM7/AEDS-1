//A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o salário e número de filhos. Faça uma função que receba o salário e a quantidade de filhos
//por pessoa (adulto), calcule e retorne a renda per capita da população. Crie um programa para ler os dados (a condição de parada pode ser um flag ou a quantidade N) e exibir a renda
//per capta calculada pela função criada

#include <stdio.h>

void rendaCapita(float salario, int filhos){
  printf("Digite seu salário e a quantidade de filhos que possui: ");
  scanf("%f %d", &salario, &filhos);

  float renda = 0;
  renda = salario/filhos;
}

int main(){
  int adultos, filhos;
  float salario, renda, soma = 0;
  
  printf("Digite a quantidade de adultos: ");
  scanf("%d", &adultos);

  for(int i=0;i<adultos;i++){
    rendaCapita(salario,  filhos);
    soma += renda;
  }
  printf("A renda per capita é: %.2f", renda);
}


