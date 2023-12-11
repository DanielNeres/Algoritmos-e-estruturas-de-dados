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
    return 0;
}