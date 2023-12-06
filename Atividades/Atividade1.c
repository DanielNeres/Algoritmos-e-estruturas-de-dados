#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	int **matriz = (int **) malloc(5 * sizeof(int));
	for (i = 0; i < 5; i++){
		matriz[i] = (int *) malloc(5 * sizeof(int));
	}
	for (i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
				printf("%d\n", i*5 + j);
		}
	}
	return 0;
}