#include <stdio.h>
int main()
{
	int c;
	printf("Ingresar caracter\n");
	c=getchar();
	int caracteres=0;
	int lineas=0;
	while(c!=EOF)
	{
		c=getchar();	
		if(c!='\n')caracteres++;
		else lineas++;
	}
	printf("Se leyeron: %d caracteres\n Hubo %d lineas\n",caracteres,lineas);
	return 0;
}
