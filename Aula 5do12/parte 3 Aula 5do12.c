
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int tamanho = 5; 
  int contador;
	int *vetor = (int*) malloc (tamanho * sizeof(int));

	if (vetor == NULL)
	{
		printf("erro na alocação de momoria");
		exit(1);

	}
  for (contador = 0; contador < tamanho; contador ++){
   scanf("%d", vetor + contador);
  }
  for (contador = 0; contador < tamanho; contador ++){
   printf("%d\n", *(vetor + contador));
  }
  printf("deu certo");
	free(vetor);
	return 0;
}