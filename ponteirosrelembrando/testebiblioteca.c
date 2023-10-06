#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar um livro
struct Book {
    char title[100];
    char author[100];
    char genre[50];
};

// Função para salvar os dados da biblioteca em um arquivo
void saveLibraryToFile(struct Book *library, int numBooks, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", filename);
        return;
    }

    for (int i = 0; i < numBooks; i++) {
        fprintf(file, "Livro #%d:\n", i + 1);
        fprintf(file, "Título: %s\n", library[i].title);
        fprintf(file, "Autor: %s\n", library[i].author);
        fprintf(file, "Gênero: %s\n", library[i].genre);
    }

    fclose(file);
}

int main() {
    int numBooks;
    printf("Quantos livros deseja armazenar na biblioteca? ");
    scanf("%d", &numBooks);

    // Aloca dinamicamente espaço para um array de estruturas de livros
    struct Book *library = (struct Book *)malloc(numBooks * sizeof(struct Book));

    if (library == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    // Preenche os detalhes dos livros
    for (int i = 0; i < numBooks; i++) {
        printf("\nLivro #%d:\n", i + 1);
        printf("Título: ");
        scanf(" %[^\n]s", library[i].title);  // Usa um espaço antes do %[^\n]s para ler espaços em branco
        printf("Autor: ");
        scanf(" %[^\n]s", library[i].author);
        printf("Gênero: ");
        scanf(" %[^\n]s", library[i].genre);
    }

    // Salva os dados da biblioteca em um arquivo de texto
    saveLibraryToFile(library, numBooks, "biblioteca.txt");
    printf("Dados da biblioteca foram salvos em 'biblioteca.txt'.\n");

    // Libera a memória alocada
    free(library);

    return 0;
}
