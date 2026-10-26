#include <stdio.h>

int main() {
    FILE *arquivo = fopen("alunos.txt", "w");

if (arquivo == NULL) {
    perror("Erro ao criar o arquivo");
    return 1;
}

printf("Arquivo aberto para escrita!\n");
fclose(arquivo);
}