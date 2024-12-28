// Elaborar um programa que leia os dados de 4 alunos (nome,
// matrícula e três notas) usando uma struct. Em seguida,
// encontre e imprima o nome e a matrícula do aluno com a
// maior média geral.
#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
    char nome[50];
    int matricula;
    float nota[TAM];
}Estudante;

int main(){
    Estudante est[TAM];
    float soma = 0.0;

    for(int i = 0; i < TAM; i++){
        float soma = 0.0;
        
        printf("Digite o nome do aluno: ");
        scanf("%s", est[i].nome);

        printf("Digite a matricula do aluno: ");
        scanf("%d", &est[i].matricula);
        
        for(int j = 0; j < TAM; j++){
            printf("Digite a %d nota do aluno: ", j + 1);
            scanf("%f", &est[i].nota[j]);
        }
        printf("\n");
    }
    float media = 0.00;
    float maior_media = 0.00;
    int aluno;

    for(int i = 0; i < TAM; i++){
        float soma = 0.0;
        for(int j = 0; j < TAM; j++){
            soma = soma + est[i].nota[j];
            media = soma/TAM;
        }
        if(media > maior_media){
            maior_media = media;
            aluno = i;
        }
    }
    printf("\nAlunos\n");
    for(int i = 0; i < TAM; i++){
        printf("\nnome do aluno %s", est[i].nome);
        printf("\nA matricula do aluno %d", est[i].matricula);
        printf("\nO nome do aluno com a maior media foi: %s", est[aluno].nome);
    }
}