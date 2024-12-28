// Exercícios – Struct1) 
// Criar um novo tipo de dado chamado “Aluno” com as seguintes 
// propriedades:- nome: string- email: string- data de nascimento:
//  string no formato dia/mês/ano (dd/mm/aaaa)- vetor de notas (máximo 5): 
//  floatCadastrar uma lista (vetor) de 5 alunos conforme tipo definido 
// acima e depois mostrar cada um deles. Mostrartambém a idade e a média das notas de cada um dos aluno


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_ALUNOS 5
#define MAX_NOME 100
#define MAX_EMAIL 100

// Estrutura para armazenar os dados de um aluno
typedef struct {
    char nome[MAX_NOME];
    char email[MAX_EMAIL];
    char data_nascimento[11]; // Formato dd/mm/aaaa
    float notas[5];
} Aluno;

// Função para calcular a idade com base na data de nascimento
int calcularIdade(const char* data_nascimento) {
    int dia, mes, ano;
    sscanf(data_nascimento, "%d/%d/%d", &dia, &mes, &ano);
    
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    
    int idade = tm.tm_year + 1900 - ano; // Ano atual - ano de nascimento
    if (tm.tm_mon + 1 < mes || (tm.tm_mon + 1 == mes && tm.tm_mday < dia)) {
        idade--; // Ajusta se o aniversário ainda não ocorreu este ano
    }
    
    return idade;
}

// Função para calcular a média das notas
float calcularMedia(float notas[], int quantidade) {
    float soma = 0.0;
    for (int i = 0; i < quantidade; i++) {
        soma += notas[i];
    }
    return soma / quantidade;
}

// Função para cadastrar os alunos
void cadastrarAlunos(Aluno alunos[]) {
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Cadastro do Aluno %d:\n", i + 1);
        
        printf("Nome: ");
        scanf(" %[^\n]s", alunos[i].nome); // Lê o nome do aluno
        
        printf("Email: ");
        scanf(" %[^\n]s", alunos[i].email); // Lê o email do aluno
        
        printf("Data de Nascimento (dd/mm/aaaa): ");
        scanf(" %[^\n]s", alunos[i].data_nascimento); // Lê a data de nascimento
        
        printf("Notas (5 notas): ");
        for (int j = 0; j < 5; j++) {
            scanf("%f", &alunos[i].notas[j]); // Lê as notas
        }
        
        printf("\n");
    }
}

// Função para mostrar os dados dos alunos
void mostrarAlunos(Aluno alunos[]) {
    printf("\n--- Lista de Alunos ---\n");
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Email: %s\n", alunos[i].email);
        printf("Data de Nascimento: %s\n", alunos[i].data_nascimento);
        printf("Idade: %d anos\n", calcularIdade(alunos[i].data_nascimento));
        
        float media = calcularMedia(alunos[i].notas, 5);
        printf("Média das Notas: %.2f\n", media);
        printf("\n");
    }
}

int main() {
    Aluno alunos[MAX_ALUNOS];
    
    // Cadastrar alunos
    cadastrarAlunos(alunos);
    
    // Mostrar dados dos alunos
    mostrarAlunos(alunos);
    
    return 0;
}
