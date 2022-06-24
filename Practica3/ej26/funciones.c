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
void aumentar_reducir(int n,int *v,int x)
{
	if(x>=0)
	{
		v=(int*) realloc(v,sizeof(int)*(n+x));
	}
	else
		if((x<=n)&&(x<0))
		{
			v=(int*) realloc(v,sizeof(int)*(n-x));
		}
}
