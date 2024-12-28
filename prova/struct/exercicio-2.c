/**
 Elaborar um programa que leia os dados de 4 funcionários
(nome, salário e tempo de serviço em anos) usando uma struct.
Calcule e imprima a média salarial dos funcionários e o nome 
e o tempo de serviço do funcionário com mais tempo na empresa.

 */
#include <stdio.h>
#include <locale.h>

#define TAM 4
typedef struct{
    char nome[50];
    float salario;
    int tempo_servico;
}Funcionario;

// void imprimirSituacao(Funcionario func){
//     printf("\nO funcionário %s", func.nome);
//     printf("\nTempo de serviço %d", func.tempo_servico);
//     printf("\nCom o salário de %.2f", func.salario);
// }

int main(){
    Funcionario func[TAM];
    int maior_tempo = 0;
    int f;
    float somaSalario = 0.0;

    setlocale(LC_ALL, "Portuguese_Brazil.1252");  // Windows

    for(int i = 0; i < TAM; i++){
        printf("Digite o nome do Funcionário %d: ", i + 1);
        scanf(" %49[^\n]", func[i].nome);

        printf("Digite o Salário do Funcionário: ");
        scanf("%f", &func[i].salario);

        printf("Digite o Tempo de Serviço do Funcionário: ");
        scanf("%d", &func[i].tempo_servico);

        somaSalario += func[i].salario;

        if(maior_tempo < func[i].tempo_servico){
            maior_tempo = func[i].tempo_servico;
            f = i;
        }

    }
    printf("\nA media salarial dos funcionario é de %.2f", somaSalario/4);
    printf("\nO funcionario com mais tempo é %s", func[f].nome);

    for(int i = 0; i < TAM; i++){
        // somaSalario = somaSalario + func[i].salario; 
        printf("\nFuncionario %s ", func[i].nome);
        printf("\nCom salario de %.2f ", func[i].salario);
        printf("\nCom o tempo de serviço de %d ", func[i].tempo_servico);
    }

}
