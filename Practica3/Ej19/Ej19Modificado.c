#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[])
{
	if(argc>1)
	{
		int ocurrencias=0;
		char str[1000];
		char *pointer;
		printf("Ingresar string por teclado\n");;
		while((fgets(str,1000,stdin)!=NULL))
		{
			if(strstr(str,argv[1]))
			{
				pointer=strstr(str,argv[1]);
				if(strcmp(pointer,argv[1])) ocurrencias++;
			}
		}
		printf("%d\n",ocurrencias);
		return 0;
	}
	else
	{ 
	return 1;
	}
}
