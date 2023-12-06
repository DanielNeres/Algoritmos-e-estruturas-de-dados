#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *vetor = malloc (3 * sizeof(int));

	if (vetor == NULL)
	{
		printf("erro na alocação de momoria");
		exit(1);

	}
    printf("deu certo");
	free(vetor);
	return 0;
}