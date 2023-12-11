#include<stdio.h>
#include<stdlib.h>
struct professor{
char nome[20];
int idade;
char formacao[40];
int disciplina;
char email_institucional[50];
};
void preencher(struct professor *estudante);
void imprimir(struct professor *estudante);

int main(){
    struct professor * estudante = (struct professor*) malloc(sizeof(struct professor));
    if(estudante == NULL){
        exit(1);
    }
    preencher(estudante);
    imprimir(estudante);
    free(estudante);
    return 0;
}

void preencher(struct professor *estudante){
    printf("digite a formacao\n");
    scanf("%d\n", (*estudante).formacao);
    printf("digite o nome\n");
    scanf("%[^\n]", (*estudante).nome);
    printf("digite a idade do\n");
    scanf("%d", &(*estudante).idade);
    printf("digite a disciplina\n");
    scanf("%d", &(*estudante).disciplina);
    printf("digite o email\n");
    scanf(" %[^\n]", (*estudante).email_institucional);
}
void imprimir(struct professor *estudante){
    printf(" nome: %s\n idade: %d\n disciplina: %d\n email_institucional: %s\n formacao: %s", (*estudante).nome, (*estudante).idade, (*estudante).disciplina, (*estudante).email_institucional, (*estudante).formacao);
}