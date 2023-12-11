#include<stdio.h>

int main(){
    struct aluno
    {
        char nome[20];
        int idade;
        int mat;
        char email[50];
    };
    struct aluno estudante;
    estudante.mat = 202210124;
    estudante.idade = 20;
    printf("%d\n", estudante.mat);
    printf("digite o nome do estudante\n");
    scanf("%[^\n]", estudante.nome);
    printf("digite a idade do estudante\n");
    scanf("%d", &estudante.idade);
    printf("digite a matricula do estudante\n");
    scanf("%d", &estudante.mat);
    printf("digite o email do estudante\n");
    scanf(" %[^\n]", estudante.email);
    return 0;
}