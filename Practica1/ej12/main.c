#include <stdio.h>
#include "funcion.h"
int main()
{
	int x;
	int y;
	scanf("%d",&x);
	scanf("%d",&y);
	double prom=promedio(x,y);
	printf("%f\n",prom);
	return 0;
}
