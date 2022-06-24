#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
	int cond=0;
	int valor1;
	int valor2;
	if(argc>1)
	{
	int resultado;
	if(argc>=4)
	{
		valor1=atoi(argv[2]);
		valor2=atoi(argv[3]);
	}
	for(int i=1;i<argc;i++)
	{
		if(strcmp(argv[i],"-i")==0) cond=1;
	}
	if(cond)
	{
		printf("Los parametros ingresados son:");
		for(int i=1;i<argc;i++) if(strcmp(argv[i],"-i")!=0)printf(" %s ",argv[i]);
		printf("\n");
	}
		if(strcmp(argv[1],"-s")==0)
		{
			resultado=valor1+valor2;
			printf("El resultado de la suma es: %d\n",resultado);
			return 0;
		}
		if(strcmp(argv[1],"-r")==0)
		{
			resultado=valor1 - valor2;
			printf("El resultado de la resta es: %d\n",resultado);
			return 0;
		}
		if(strcmp(argv[1],"-d")==0)
		{
			resultado=valor1/valor2;
			printf("El resultado de la division es: %d\n",resultado);
			return 0;
		}
		if(strcmp(argv[1],"-m")==0)
		{
			resultado=valor1*valor2;
			printf("El resultado de la multiplicacion es: %d\n",resultado);
			return 0;
		}
		if(strcmp(argv[1],"-h")==0)
		{
			printf("El programa imprime el resultado de enviar una operación y suscorrespondientes parámetros. El resultado será impreso en pantalla\nArgumentos:\n -s: suma los siguientes 2 parámetros.\n -r: resta los siguientes 2 parámetros.\n -d: divide los siguientes 2 parámetros.\n -m: multiplica los siguientes 2 parámetros.\n -i: imprime todos los parámetros recibidos.\n -h: imprime un texto de ayuda.\n");
			return 0;
		}
	}
	return 0;
}
