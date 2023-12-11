#include<stdio.h>
#include<stdlib.h>
struct aluno{
char nome[20];
int idade;
int mat;
char email[50];
};

int main(){
    struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
    if(estudante == NULL){
        exit(1);
    }
    printf("%d\n", (*estudante).mat);
    printf("digite o nome do estudante\n");
    scanf("%[^\n]", (*estudante).nome);
    printf("digite a idade do estudante\n");
    scanf("%d", &(*estudante).idade);
    printf("digite a matricula do estudante\n");
    scanf("%d", &(*estudante).mat);
    printf("digite o email do estudante\n");
    scanf(" %[^\n]", (*estudante).email);
    free(estudante);
    return 0;
}