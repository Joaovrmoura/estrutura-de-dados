// Exercício 1: Registro de Livros
// Descrição: Crie um programa que utilize uma struct para
// armazenar informações de 5 livros (título, autor e ano de publicação). O programa deve 
// permitir que o usuário insira os dados dos livros e, ao final,
// exiba uma lista com todas as informações.

#include <stdio.h>

#define TAM 5

typedef struct {
    char titulo[100];
    char autor[50];
    int ano_publicacao;
} Livro;

int main() {
    Livro livros[TAM];

    // Entrada de dados
    for (int i = 0; i < TAM; i++) {
        printf("Digite o título do livro %d: ", i + 1);
        scanf(" %[^\n]", livros[i].titulo);

        printf("Digite o autor do livro %d: ", i + 1);
        scanf(" %[^\n]", livros[i].autor);

        printf("Digite o ano de publicação do livro %d: ", i + 1);
        scanf("%d", &livros[i].ano_publicacao);
    }

    // Exibição dos dados
    printf("\nLista de Livros:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Livro %d: Título: %s, Autor: %s, Ano: %d\n", 
               i + 1, livros[i].titulo, livros[i].autor, livros[i].ano_publicacao);
    }

    return 0;
}
