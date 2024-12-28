/**
    Elaborar um programa em C que leia um vetor com 10 números reais.
     Criar funções para obter o maior e o menor valor armazenado nele, bem como suas posições.
 */

#include <stdio.h>
#define TAM 10

float MaiorNumVet(float vet[]);
int IndMaiorNumVet(float vet[]);
float MenorNumVet(float vet[]);
int IndMenorNumVet(float vet[]);


int main(){

    float v[TAM], maior, menor;
    int i, imaior, imenor;

    for(i=0;i<TAM;i++)
    {
        printf("Digite o %d elemento do vetor: ",(i+1));
        scanf("%f",&v[i]);
    }
    maior = MaiorNumVet(v);
    imaior = IndMaiorNumVet(v);
    menor = MenorNumVet(v);
    imenor = IndMenorNumVet(v);
    
    printf("Menor num %.2f na posicao (%d).\n",menor,imenor);
    printf("Maior num %.2f na posicao (%d).\n",maior,imaior);

    for(i=0;i<TAM;i++){
        printf("%.2f ",v[i]);
    }
    printf("\n");
    
    return 0;
}

//Retorna o maior numero de um vetor de 10 numeros reais
float MaiorNumVet(float vet[]){
    int i;
    float maiornum;
    
    maiornum = vet[0];
    for(i=1;i<TAM;i++){
        
        if (vet[i] > maiornum)
            maiornum = vet[i];
    }
    return maiornum;
}

//Retorna o indice do maior numero de um vetor de 10 numeros reais
int IndMaiorNumVet(float vet[]){
    int i, indmaiornum;
    float maiornum;
    
    maiornum = vet[0];
    indmaiornum = 0;
    for(i=1;i<TAM;i++){
        if (vet[i] > maiornum)
        {
            maiornum = vet[i];
            indmaiornum = i;
        }
    }
    
    return indmaiornum+1;
}

//Retorna o menor numero de um vetor de 10 numeros reais
float MenorNumVet(float vet[]){
    int i;
    float menornum;
    
    menornum = vet[0];
    for(i=1;i<TAM;i++){
        
        if (vet[i] < menornum)
            menornum = vet[i];
    }
    return menornum;
}

//Retorna o indice do menor numero de um vetor de 10 numeros reais
int IndMenorNumVet(float vet[]){
    int i, indmenornum;
    float menornum;
    
    menornum = vet[0];
    indmenornum = 0;
    for(i=1;i<TAM;i++){
        if (vet[i] < menornum){
            menornum = vet[i];
            indmenornum = i;
        }
    }
    
    return indmenornum+1;
}

