#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
	printf("Ingresar el numero para alocar memoria\n");
	int n;
	int *v;
	scanf("%d",&n);
	v=crear_vector_int(n);
	for(int i=0;i<n;i++) v[i]=i;
	for(int i=0;i<n;i++) printf("%d \n",v[i]);
	printf("La cantidad de elementos es de: %d\n",elementos);
	liberar_memoria(v);
	for(int i=0;i<n;i++) printf("%d \n",v[i]);
	return 0;
}     
