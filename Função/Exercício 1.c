//Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for ‘A’, o procedimento calcula e escreve a média aritmética das notas do aluno, se for
//‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que leia 3 notas de N alunos e acione o procedimento para cada aluno. (N deve ser lido do teclado)

//Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for ‘A’, o procedimento calcula e escreve a média aritmética das notas do aluno, se for ‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que leia 3 notas de N alunos e acione o procedimento para cada aluno. (N deve ser lido do teclado)

#include <stdio.h>

void notasAlunos(float nota1, float nota2, float nota3, char letra){
  float media;
  if(letra == 'A'){
    media = (nota1 + nota2 + nota3)/3.0;
    printf("\nA média do aluno é: %.2f\n", media);
  }else if(letra == 'P'){
    media = (nota1*5 + nota2*3 + nota3*2)/3.0;
    printf("\nA média do aluno é: %.2f\n", media);
  }
}

int main(){
  int qnt;
  char letra;
  float nota1, nota2, nota3;

  printf("Deseja colocar a nota de quantos alunos? ");
  scanf("%d", &qnt);

  for(int i=0;i<qnt;i++){
    printf("\nDigite as 3 notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("\nSerá média aritmética ou ponderada? Letra A ou P: ");
    scanf(" %c", &letra);
    
    notasAlunos(nota1, nota2, nota3, letra);
  }
}
