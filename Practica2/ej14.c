#include <stdio.h>
#define cuadrado(x) x*x
int main()
{
	int x;
	scanf ("%d",&x);
	printf("El valor ingresado fue: %d\n",x);
	printf("%d\n",cuadrado(x));
	printf("%d\n",x);
	printf("%d\n",cuadrado(x+1));
	return 0;
}
