#include<stdio.h>

int main(){
    struct aluno
    {
        char nome[20];
        int idade;
        int mat;
        char email[50];
    };
    struct aluno a;
    a.mat = 202210124;
    a.idade = 20;
    printf("%d", a.mat);
    return 0;
}