#include <stdio.h>
#include "funciones.h"
int main()
{
	int *v;
	int n;
	int accion;
	printf("Ingrese la cantidad de memoria a alocar: \n");
	scanf("%d",n);
	v=crear_vector_int(n)
	printf("Ingrese 1 si quiere aumentar el espacio o 0 si quiere reducirlo\n");
	scanf("%d",&accion);
	aumentar_reducir(v)
	return 0;
}
