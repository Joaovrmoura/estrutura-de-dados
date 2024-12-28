#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

typedef struct
{
    char nome[50];
    int idade;
    int matricula;
    float nota;
} estudante;

int main(){
    setlocale(LC_ALL, "Portuguese");

    estudante est = {"joao", 24, 24066, 9.9};

    printf("\ninicio\n");
    printf("aluno %s \n", est.nome);
    printf("nota %d \n", est.idade);
    printf("aluno matrícula %d \n", est.matricula);
    printf("Nota %.2f \n", est.nota);
}