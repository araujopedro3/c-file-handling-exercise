#include <stdio.h>

int main(void) {
    FILE *arquivo = fopen("alunos.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(arquivo, "Nome: Pedro\n");
    fprintf(arquivo, "Nome: Cecilia\n");

    fclose(arquivo);

    printf("Dados gravados com sucesso!\n");
    
    return 0;
}