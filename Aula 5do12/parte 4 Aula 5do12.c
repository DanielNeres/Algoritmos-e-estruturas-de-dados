#include<stdio.h>
#include<stdlib.h>

int main()
{
  int tamanho = 5, novotamanho;
	int *vetor = (int*) malloc (tamanho * sizeof(int));

	if (vetor == NULL)
	{
		printf("erro na alocação de momoria");
		exit(1);

	}
    printf("digite o novo tamanho do vetor");
    scanf("%d", &novotamanho);
  vetor = (int*) realloc (vetor, novotamanho * sizeof(int));

  	if (vetor == NULL)
	{
		printf("erro na alocação de momoria\n");
		exit(1);

	}
  printf("deu certo");
	free(vetor);
	return 0;
}