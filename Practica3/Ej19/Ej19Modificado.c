#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
	int ocurrencias=0;
	int primera;
	if(argc>1)
	{
		char str[1000];
		//for(int i=0;i<strlen(str);i++)if(str[i]=='\n') str[i]='\0';
		primera=getchar();
		while(primera!=EOF)
		{	
			fgets(str,1000,stdin);
			for(int i=strlen(str);i>=0;i--)
			{
				str[i+1]=str[i];
			}
			str[0]=primera;
			if(str[strlen(str)-1]=='\n')str[strlen(str)-1]='\0';
			if(strcmp(str,argv[1])==0) ocurrencias++;
			primera=getchar();
			//for(int i=0;i<strlen(str);i++)if(str[i]=='\n') str[i]='\0';
		}
		printf("%d\n",ocurrencias);
		return 0;
	}
	else
	{ 
	return 1;
	}
}
