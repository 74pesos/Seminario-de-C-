#include <stdlib.h>
int*crear_vector_int(int n)
{
	int *puntero;
	puntero=(int *)malloc(sizeof(int)*n);
	return (int*) puntero;
}
void liberar_memoria(int *v)
{
	free(v);
}
