#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[])
{
	if(argc>1)
	{
		char str[1000];
		printf("Ingresar string por teclado\n");;
		while((strstr(str,argv[1])==0)&&(fgets(str,1000,stdin)!=NULL));
		return 0;
	}
	else
	{ 
	return 1;
	}
}
