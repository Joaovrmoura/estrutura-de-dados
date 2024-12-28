// 2. Elaborar um programa em C que escreva uma função chamada multiplo que
// determine para um par de inteiros, se o segundo inteiro é múltiplo do primeiro. A
// função deve receber dois argumentos e retornar 1 (verdadeiro), se o segundo for um
// múltiplo do primeiro e 0 (falso), caso contrário. Use essa função em um programa que
// faça a leitura de 10 pares de inteiros.

#include <stdio.h>


int multiplo(int n1, int n2){
    if(n1 %n2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n1, n2;
    int result = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n2);

    result = multiplo(n1, n2);

    printf("%d", result);
}