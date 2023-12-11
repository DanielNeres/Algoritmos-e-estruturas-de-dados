#include<stdio.h>
#include<stdlib.h>
struct professor{
char nome[20];
int idade;
char formacao[40];
char disciplina[60];
char email_institucional[50];
};
void preencher(struct professor *profs);
void imprimir(struct professor *profs);

int main(){
    struct professor * profs = (struct professor*) malloc(sizeof(struct professor));
    if(profs == NULL){
        exit(1);
    }
    preencher(profs);
    imprimir(profs);
    free(profs);
    return 0;
}

void preencher(struct professor *profs){
    printf("digite a formacao\n");
    scanf(" %[^\n]", (*profs).formacao);
    printf("digite o nome\n");
    scanf(" %[^\n]", (*profs).nome);
    printf("digite a idade\n");
    scanf("%d", &(*profs).idade);
    printf("digite a disciplina\n");
    scanf(" %[^\n]", (*profs).disciplina);
    printf("digite o email\n");
    scanf(" %[^\n]", (*profs).email_institucional);
}
void imprimir(struct professor *profs){
    printf(" nome: %s\n idade: %d\n disciplina: %s\n email_institucional: %s\n formacao: %s", (*profs).nome, (*profs).idade, (*profs).disciplina, (*profs).email_institucional, (*profs).formacao);
}