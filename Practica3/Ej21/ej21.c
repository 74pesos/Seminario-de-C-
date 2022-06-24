#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define RED "\e[0;31m"
int main(int argc,char *argv[])
{
	if(argc>1)
	{
		if((strcmp(argv[1],"-h")==0)||(strcmp(argv[1],"-help")==0))
		{
			printf("Usage: grep [OPTION]... PATTERNS [FILE]...\nPruebe 'grep --help' para más información.\n");
		}
		else
		{
 			int linea=1;
			int primera;
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
				if(strcmp(str,argv[1])==0) printf("%d:%s\n",linea,argv[1]);
				linea++;
				primera=getchar();
				//for(int i=0;i<strlen(str);i++)if(str[i]=='\n') str[i]='\0';
			}
			return 0;
		}
	}
	else
	{ 
		fprintf(stderr,RED "ERROR FALTO ALGUN ARGUMENTO\n");
	return 1;
	}
}
