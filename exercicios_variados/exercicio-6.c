/**
Você é responsável por desenvolver um sistema que gerencia as notas de quatro alunos de uma turma. 
Cada aluno tem um nome (leitura), duas notas (leitura) e uma situação que pode ser
"Aprovado(a)", "Em Exame Final" ou "Reprovado(a)".
A situação do aluno deve ser determinada com base na média das duas notas:

 Se a média for maior ou igual a 6, a situação deve ser "Aprovado(a)".
 Se a média for maior ou igual a 4 e menor que 6, a situação deve ser "Em Exame Final".
 Se a média for menor que 4, a situação deve ser "Reprovado(a)".

 Criar funções para:

 a) Calcular a média e atualizar a situação de cada aluno;
 b) Imprimir a situação de cada aluno;
 c) Imprimir todos os nomes dos alunos que ficaram reprovados caso exista algum aluno reprovado;
 d) Obter o(s) nome(s) do(s) aluno(s) que obtiveram a maior média.
 */

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{
    char nome[50];
    float nota1;
    float nota2;
    char situacao[50];
}Alunos;

int atualizaAlunos(Alunos aluno){
    float media = (aluno.nota1 + aluno.nota2) / 2.0;

    if(media >=6){
        strcpy(aluno.situacao, "Aprovado(a)");
    }else if(media >= 4 || media < 6){
        strcpy(aluno.situacao, "Em Exame Final");
    }else if(media < 4){
        strcpy(aluno.situacao, "Reprovado");
    }
}
void imprmirAluno(Alunos aluno){
    printf("\nO aluno %s", aluno.nome);
    printf("\nNota %.2f", aluno.nota1);
    printf("\nNota %.2f", aluno.nota2);
    printf("\nEstá na situação %s", aluno.situacao);
    
}
int mediaAlunos(int notas[2]){
    
}