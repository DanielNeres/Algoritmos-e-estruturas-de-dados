#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tamanho;
    char *nome = (char *) malloc(50 * sizeof(char)); 
    if(nome == NULL){
        exit(1);
    }
    printf("digite seu nome completo\n");
    scanf("%[^\n]", nome);
    printf("\n%s", nome);
    free(nome);
    return 0;
}