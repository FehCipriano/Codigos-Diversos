#include <stdio.h>

// Estrutura para representar um livro
struct Book {
    char title[100];
    char author[100];
    char genre[50];
};

int main() {
    // Abre o arquivo "biblioteca.txt" para leitura
    FILE *file = fopen("biblioteca.txt", "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo 'biblioteca.txt'. Certifique-se de que ele existe no diretório do programa.\n");
        return 1;
    }

    // Lê e exibe os dados da biblioteca a partir do arquivo
    char line[200];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Fecha o arquivo após a leitura
    fclose(file);

    return 0;
}
