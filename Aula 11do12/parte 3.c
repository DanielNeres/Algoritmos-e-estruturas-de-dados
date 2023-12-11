#include<stdio.h>
#include<stdlib.h>
typedef struct aluno{
char nome[20];
int idade;
int mat;
char email[50];
}aluno;

void preencher(aluno *estudante);
void imprimir(aluno *estudante);

int main(){
    aluno * estudante = (aluno*) malloc(sizeof(aluno));
    if(estudante == NULL){
        exit(1);
    }
    preencher(estudante);
    imprimir(estudante);
    free(estudante);
    return 0;
}

void preencher(aluno *estudante){
    printf("%d\n", (*estudante).mat);
    printf("digite o nome do estudante\n");
    scanf("%[^\n]", (*estudante).nome);
    printf("digite a idade do estudante\n");
    scanf("%d", &(*estudante).idade);
    printf("digite a matricula do estudante\n");
    scanf("%d", &(*estudante).mat);
    printf("digite o email do estudante\n");
    scanf(" %[^\n]", (*estudante).email);
}
void imprimir(aluno *estudante){
    printf(" nome: %s\n idade: %d\n matricula: %d\n email: %s\n", (*estudante).nome, (*estudante).idade, (*estudante).mat, (*estudante).email );
}