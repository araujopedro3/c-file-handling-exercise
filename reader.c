#include <stdio.h>

int main(void) {
    FILE *arquivo = fopen("alunos.txt", "r");
    char linha [200];

    if (arquivo == NULL) {
        printf("Arquivo não encontrado!\n");
        return 1;
    }

    printf("--- CONTEUDO DOS ARQUIVOS ---\n");

    while(fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
    return 0;
}