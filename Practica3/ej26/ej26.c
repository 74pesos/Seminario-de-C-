#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main(int argc, char *argv[])
{
	int n;
	int *v;
	int x=0;
	printf("Ingresar valor n\n");
	scanf("%d",&n);
	v=crear_vector_int(n);
	for(int i=0;i<n;i++) v[i]=i;
	for(int i=0;i<n;i++) printf("%d\n",v[i]);
	printf("Ingresar un valor positivo aumentar el espacio reservado o uno negativo para reducir\n");
	scanf("%d",&x);
	aumentar_reducir(n,v,x);
	for(int i=0;i<n;i++) printf("%d\n",v[i]);
	return 0;
}

