#include <stdio.h>
#include <string.h>
int main(int argc, char*argv[])
{
	if(argc>1)
	{
		if(strcmp(argv[1],"abracadabra")==0) printf("C is quirky, flawed, and an enormous succes. -Dennis Ritchie\n");
		else printf("%d argumento/s\n",argc-1);
	}
	else printf("NO SE INGRESARON ARGUMENTOS\n");
	return 0;
	
}
