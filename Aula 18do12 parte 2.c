#include <stdio.h>
#include <stdlib.h>

// criação da struct dependente
typedef struct disciplina{
    char nome[20];
    float nota;
    int codigo;
}Disciplina;

// criação da struct principal
typedef struct aluno{
    char nome[20];
    int idade;
    int matricula;
    Disciplina * materias;
}Aluno;

int main(void){
    // criação da variavel ponteiro vetor aluno
    Aluno *aluno = (Aluno*) malloc(sizeof(Aluno));
    int i;
    if(aluno == NULL){
        exit(1);
    }
    // definição da quantidade de materias atravez da alocação dinamica malloc
    aluno -> materias = (Disciplina*) malloc(2*sizeof(Disciplina));
    if(aluno -> materias == NULL){
        exit(1);
    }
    // coleta as informações do aluno
    printf("informe os dados do aluno: \n");
    scanf(" %[^\n]", aluno -> nome);
    scanf("%d %d", &aluno->idade, &aluno->matricula);

    int index;

    // coleta as informações das materias
    for(index = 0; index < 2; index++){
        printf("Cadastro de disciplinas %d : \n", index+1);
        printf("Informe o nome: \n");
        scanf(" %[^\n]", aluno->materias[index].nome);
        printf("Informe a nota: \n");
        scanf("%f", &aluno->materias[index].nota);
        printf("Informe o codigo: \n");
        scanf("%d", &aluno->materias[index].codigo);
    }
    // imprimi as informações das diciplinas
    for(index = 0; index < 2; index++){
        printf("Disciplina %d : \n", index+1);
        printf("Nome: %s\nNota: %.2f\nCodigo: %d\n", aluno->materias[index].nome, aluno->materias[index].nota,
        aluno->materias[index].codigo);
    }

    free(aluno->materias);
    free(aluno);

    return 0;
}
