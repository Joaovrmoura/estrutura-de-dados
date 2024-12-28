// Fazer um programa que permita ao usuário escolher entre um conjunto de funcionalidades
// relativas ao tratamento de uma folha de pagamento de uma empresa. Estas funcionalidades são,
// pelo menos:
// - Entrar com: os salários, os nomes dos funcionários, sexos dos funcionários e os índices de
// produtividade (de 0,1 à 1,0).
// - Calcular a média salarial.
// - Calcular o maior salário.
// - Calcular o menor salário.
// - Calcular quantos salários são maiores que a média salarial.
// - Calcular quantos salários são menores que a média salarial.
// - Calcular quantos salários são iguais a média salarial.
// - Especificar quais são os funcionários que têm salário maior que a média salarial
// - Especificar quais são os funcionários que têm salário menor que a média salarial.
// - Especificar quais são os funcionários que têm salário igual a média salarial. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FUNCIONARIOS 100
#define MAX_NOME 50

// Estrutura para armazenar os dados de cada funcionário
typedef struct {
    char nome[MAX_NOME];
    char sexo; // 'M' para masculino, 'F' para feminino
    float salario;
    float indice_produtividade;
} Funcionario;

// Funções para as funcionalidades do programa
void cadastrarFuncionarios(Funcionario funcionarios[], int *contador);
float calcularMediaSalarial(Funcionario funcionarios[], int contador);
float encontrarMaiorSalario(Funcionario funcionarios[], int contador);
float encontrarMenorSalario(Funcionario funcionarios[], int contador);
void salariosMaioresQueMedia(Funcionario funcionarios[], int contador, float media);
void salariosMenoresQueMedia(Funcionario funcionarios[], int contador, float media);
void salariosIguaisAMedia(Funcionario funcionarios[], int contador, float media);

int main() {
    Funcionario funcionarios[MAX_FUNCIONARIOS];
    int contador = 0;
    int opcao;
    
    do {
        printf("\n--- Menu de Folha de Pagamento ---\n");
        printf("1. Cadastrar Funcionários\n");
        printf("2. Calcular Média Salarial\n");
        printf("3. Calcular Maior Salário\n");
        printf("4. Calcular Menor Salário\n");
        printf("5. Salários Maiores que a Média\n");
        printf("6. Salários Menores que a Média\n");
        printf("7. Salários Iguais a Média\n");
        printf("8. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                cadastrarFuncionarios(funcionarios, &contador);
                break;
            case 2: {
                float media = calcularMediaSalarial(funcionarios, contador);
                printf("A média salarial é: %.2f\n", media);
                break;
            }
            case 3: {
                float maior = encontrarMaiorSalario(funcionarios, contador);
                printf("O maior salário é: %.2f\n", maior);
                break;
            }
            case 4: {
                float menor = encontrarMenorSalario(funcionarios, contador);
                printf("O menor salário é: %.2f\n", menor);
                break;
            }
            case 5: {
                float media = calcularMediaSalarial(funcionarios, contador);
                salariosMaioresQueMedia(funcionarios, contador, media);
                break;
            }
            case 6: {
                float media = calcularMediaSalarial(funcionarios, contador);
                salariosMenoresQueMedia(funcionarios, contador, media);
                break;
            }
            case 7: {
                float media = calcularMediaSalarial(funcionarios, contador);
                salariosIguaisAMedia(funcionarios, contador, media);
                break;
            }
            case 8:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 8);
    
    return 0;
}

// Função para cadastrar os funcionários
void cadastrarFuncionarios(Funcionario funcionarios[], int *contador) {
    if (*contador < MAX_FUNCIONARIOS) {
        Funcionario f;
        printf("Digite o nome do funcionário: ");
        scanf(" %[^\n]s", f.nome); // Lê o nome do funcionário
        printf("Digite o sexo do funcionário (M/F): ");
        scanf(" %c", &f.sexo); // Lê o sexo do funcionário
        printf("Digite o salário do funcionário: ");
        scanf("%f", &f.salario); // Lê o salário do funcionário
        printf("Digite o índice de produtividade (0.1 a 1.0): ");
        scanf("%f", &f.indice_produtividade); // Lê o índice de produtividade

        funcionarios[*contador] = f; // Armazena os dados no vetor
        (*contador)++; // Incrementa o contador
    } else {
        printf("Número máximo de funcionários cadastrados!\n");
    }
}

// Função para calcular a média salarial
float calcularMediaSalarial(Funcionario funcionarios[], int contador) {
    float soma = 0;
    for (int i = 0; i < contador; i++) {
        soma += funcionarios[i].salario; // Soma os salários
    }
    return (contador > 0) ? (soma / contador) : 0; // Retorna a média
}

// Função para encontrar o maior salário
float encontrarMaiorSalario(Funcionario funcionarios[], int contador) {
    float maior = funcionarios[0].salario;
    for (int i = 1; i < contador; i++) {
        if (funcionarios[i].salario > maior) {
            maior = funcionarios[i].salario; // Atualiza o maior salário
        }
    }
    return maior;
}

// Função para encontrar o menor salário
float encontrarMenorSalario(Funcionario funcionarios[], int contador) {
    float menor = funcionarios[0].salario;
    for (int i = 1; i < contador; i++) {
        if (funcionarios[i].salario < menor) {
            menor = funcionarios[i].salario; // Atualiza o menor salário
        }
    }
    return menor;
}

// Função para listar salários maiores que a média
void salariosMaioresQueMedia(Funcionario funcionarios[], int contador, float media) {
    printf("Funcionários com salário maior que a média:\n");
    for (int i = 0; i < contador; i++) {
        if (funcionarios[i].salario > media) {
            printf("Nome: %s, Salário: %.2f\n", funcionarios[i].nome, funcionarios[i].salario);
        }
    }
}

// Função para listar salários menores que a média
void salariosMenoresQueMedia(Funcionario funcionarios[], int contador, float media) {
    printf("Funcionários com salário menor que a média:\n");
    for (int i = 0; i < contador; i++) {
        if (funcionarios[i].salario < media) {
            printf("Nome: %s, Salário: %.2f\n", funcionarios[i].nome, funcionarios[i].salario);
        }
    }
}

// Função para listar salários iguais à média
void salariosIguaisAMedia(Funcionario funcionarios[], int contador, float media) {
    printf("Funcionários com salário igual à média:\n");
    for (int i = 0; i < contador; i++) {
        if (funcionarios[i].salario == media) {
            printf("Nome: %s, Salário: %.2f\n", funcionarios[i].nome, funcionarios[i].salario);
        }
    }
}
