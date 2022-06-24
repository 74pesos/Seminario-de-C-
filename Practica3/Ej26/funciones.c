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
void aumentar_reducir(int n,int *v)
{
	int cant;int last;
	sizeof(v[]/
	if(cant)
	{
		printf("Ingresar cantidad de memoria a alocar");
		scanf("%d",cant);
		v=(int*)malloc(sizeof(int)*cant));
	}
	else
	{
		printf("Ingresar cantidad de memoria para desalocar:");
		scanf("%d",cant);
		
	}
}
