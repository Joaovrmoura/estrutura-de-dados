#include <stdio.h>
#define TAM 5

typedef struct{
    char municipio[50];
    int populacao;
}cidade;

int main(){
    cidade city[TAM];
    int cont = 0;
    int soma_populcao = 0;
    int me;
    float media = 0.0;
    int ma;
    int indice_maior = 0;
    int menor_p = -1;
    int maior_p = 0;

    for(int i = 0; i < TAM; i++){
        printf("Digite o nome do %d municipio: ", i + 1);
        scanf("%s", city[i].municipio);

        printf("Digite a quantidade populacional: ");
        scanf("%d", &city[i].populacao);

        if(city[i].populacao > maior_p){
            maior_p = city[i].populacao;
            ma = i;
        }
        if(menor_p < 0 || city[i].populacao < menor_p){
            menor_p = city[i].populacao;
            me = i;
        }
        soma_populcao += city[i].populacao;
    }
        media = soma_populcao/TAM;

        printf("\nNOmes dos municipios Cadastrados na cidade do Rio:\n");
        for(int i = 0; i < TAM; i++){
            printf("\nMunicipio %d: %s", i + 1, city[i].municipio);
            printf("\nQuntidade populacional: %d\n", city[i].populacao);
        }
        printf("\nA media da populacinal dos 5 municipios e: %.2f", media);
        printf("\nNOme do municipio com maior popula��o: %s", city[ma].municipio);
        printf("\nNOme do municipio com menor popula��o: %s", city[me].municipio);

        return 0;
}
