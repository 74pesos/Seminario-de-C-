#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[])
{
	if(argc>1)
	{
		char str[1000];
		printf("Ingresar string por teclado\n");
		fgets(str,1000,stdin);
		str[strlen(str)-1]='\0';
		//for(int i=0;i<strlen(str);i++)if(str[i]=='\n') str[i]='\0';
		while(strcmp(str,argv[1])!=0)
		{
			fgets(str,1000,stdin);
			str[strlen(str)-1]='\0';
			//for(int i=0;i<strlen(str);i++)if(str[i]=='\n') str[i]='\0';
		}
		return 0;
	}
	else
	{ 
	return 1;
	}
}
