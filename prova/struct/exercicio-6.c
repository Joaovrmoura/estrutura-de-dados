// 2) Nesse exercício vamos trabalhar com compromissos de uma pessoa. Um compromisso
// possui um texto (string de até 200 caracteres), uma data e um horário. Uma data deve
// possuir dia, mês e ano, todos números inteiros. Um horário deve possuir hora, minuto e
// segundo, todos também números inteiros.
// a) Crie em seu programa todas as estruturas necessárias para armazenar as
// informações de compromissos.
// b) Crie agora um vetor de compromissos de 20 posições. Use a diretiva define
// para definir o tamanho desse vetor.
// c) Inicialize o vetor de compromissos com números aleatórios da seguinte forma: o
// dia da data deve ser um número entre 1 e 20, o mês deve ser um número entre
// 1 e 12, o ano deve ser um número entre 2016 e 2019. A hora do horário deve
// ser um número entre 0 e 23, o minuto um número entre 0 e 59, o segundo
// também um número entre 0 e 59. Por fim, o texto de todos os compromissos
// deve ser “Compromisso de teste gerado aleatoriamente.”.
// d) Imprima o vetor de compromissos inicializado anteriormente no seguinte
// formato:

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Necessário para gerar números aleatórios
#include <string.h> // Necessário para usar strcpy

// Definição de constantes
#define MAX_COMPROMISSOS 20
#define MAX_TEXTO 200

// Estruturas para data, horário e compromisso
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int hora;
    int minuto;
    int segundo;
} Horario;

typedef struct {
    char texto[MAX_TEXTO];
    Data data;
    Horario horario;
} Compromisso;

// Função para inicializar compromissos
void inicializarCompromissos(Compromisso compromissos[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        // Gerando data aleatória
        compromissos[i].data.dia = rand() % 20 + 1; // Dia entre 1 e 20
        compromissos[i].data.mes = rand() % 12 + 1; // Mês entre 1 e 12
        compromissos[i].data.ano = rand() % 4 + 2016; // Ano entre 2016 e 2019
        
        // Gerando horário aleatório
        compromissos[i].horario.hora = rand() % 24; // Hora entre 0 e 23
        compromissos[i].horario.minuto = rand() % 60; // Minuto entre 0 e 59
        compromissos[i].horario.segundo = rand() % 60; // Segundo entre 0 e 59
        
        // Definindo texto do compromisso
        strcpy(compromissos[i].texto, "Compromisso de teste gerado aleatoriamente.");
    }
}

// Função para imprimir compromissos
void imprimirCompromissos(Compromisso compromissos[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Compromisso %d:\n", i + 1);
        printf("Texto: %s\n", compromissos[i].texto);
        printf("Data: %02d/%02d/%d\n", compromissos[i].data.dia, compromissos[i].data.mes, compromissos[i].data.ano);
        printf("Horário: %02d:%02d:%02d\n\n", compromissos[i].horario.hora, compromissos[i].horario.minuto, compromissos[i].horario.segundo);
    }
}

int main() {
    // Inicialização do gerador de números aleatórios
    srand(time(NULL));

    // Declaração do vetor de compromissos
    Compromisso compromissos[MAX_COMPROMISSOS];

    // Inicializa e imprime os compromissos
    inicializarCompromissos(compromissos, MAX_COMPROMISSOS);
    imprimirCompromissos(compromissos, MAX_COMPROMISSOS);

    return 0;
}
