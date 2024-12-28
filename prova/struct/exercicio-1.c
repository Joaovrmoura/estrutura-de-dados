// Exercício 1: Cadastro de Alunos e Cálculo de Média
// Descrição:
// Crie um programa em C que cadastre 3 alunos. 
// Para cada aluno, o programa deve solicitar o nome,
// idade e as notas de 3 disciplinas. Utilize uma struct
// para armazenar os dados dos alunos e uma função para
// calcular a média das notas de cada aluno. Após calcular 
// as médias, exiba o nome do aluno, a média e uma mensagem 
// informando se ele foi "Aprovado" (média >= 7) ou "Reprovado" (média < 7).

// Requisitos:

// Uma struct para armazenar os dados do aluno (nome, idade, 3 notas).
// Função para calcular a média das notas.
// Função para exibir os resultados.

#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 3
#define NUM_NOTAS 3

// Definindo a struct para armazenar os dados de um aluno
struct Aluno {
    char nome[50];
    int idade;
    float notas[NUM_NOTAS];
};

// Função para calcular a média de um aluno
float calcularMedia(float notas[], int numNotas) {
    float soma = 0;
    for(int i = 0; i < numNotas; i++) {
        soma += notas[i];
    }
    return soma / numNotas;
}

// Função para exibir o resultado
void exibirResultado(struct Aluno aluno) {
    float media = calcularMedia(aluno.notas, NUM_NOTAS);
    printf("\nAluno: %s\nIdade: %d\nMédia: %.2f\n", aluno.nome, aluno.idade, media);
    if(media >= 7) {
        printf("Resultado: Aprovado\n");
    } else {
        printf("Resultado: Reprovado\n");
    }
}

int main() {
    struct Aluno alunos[NUM_ALUNOS];

    // Leitura dos dados dos alunos
    for(int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", alunos[i].nome);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);
        
        for(int j = 0; j < NUM_NOTAS; j++) {
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &alunos[i].notas[j]);
        }
    }

    // Exibição dos resultados
    for(int i = 0; i < NUM_ALUNOS; i++) {
        exibirResultado(alunos[i]);
    }

    return 0;
}
