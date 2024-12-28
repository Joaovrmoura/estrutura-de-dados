// 4. Elaborar um programa em C que realize as operações
// apresentadas abaixo. Dois números devem ser lidos do teclado e
// uma opção deve ser digitada. Nas opções 1, 2, 3 e 4 devem ser
// utilizadas funções.

// Estrutura de Dados (ED)
// Aplicação de Funções

// Multiplicação de Dois Números ............................................... [1]
// Divisão de Dois Números .......................................................... [2]
// Raiz Quadrada do Primeiro Número ........................................ [3]
// Segundo Número Elevado ao Quadrado ................................. [4]
// Sair ................................................................................................. [5]


#include <stdio.h>
#include <math.h>

// Função para multiplicação de dois números
float multiplicar(float num1, float num2) {
    return num1 * num2;
}

// Função para divisão de dois números
float dividir(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro: Divisão por zero!\n");
        return 0; // Retorna 0 em caso de erro de divisão
    }
}

// Função para calcular a raiz quadrada do primeiro número
float raiz_quadrada(float num) {
    if (num >= 0) {
        return sqrtf(num);
    } else {
        printf("Erro: Não é possível calcular a raiz quadrada de número negativo!\n");
        return -1; // Indica erro para números negativos
    }
}

// Função para elevar o segundo número ao quadrado
float elevar_ao_quadrado(float num) {
    return num * num;
}

int main() {
    float num1, num2;
    int opcao;

    // Leitura dos dois números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Menu de opções
    do {
        printf("\nEscolha uma opcao:\n");
        printf("[1] Multiplicacao de dois numeros\n");
        printf("[2] Divisao de dois numeros\n");
        printf("[3] Raiz quadrada do primeiro numero\n");
        printf("[4] Segundo numero elevado ao quadrado\n");
        printf("[5] Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Resultado da multiplicacao: %.2f\n", multiplicar(num1, num2));
                break;
            case 2:
                printf("Resultado da divisao: %.2f\n", dividir(num1, num2));
                break;
            case 3:
                {
                    float resultado = raiz_quadrada(num1);
                    if (resultado != -1) {
                        printf("Raiz quadrada do primeiro numero: %.2f\n", resultado);
                    }
                }
                break;
            case 4:
                printf("Segundo numero elevado ao quadrado: %.2f\n", elevar_ao_quadrado(num2));
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while(opcao != 5);

    return 0;
}
