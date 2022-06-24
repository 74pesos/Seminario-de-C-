#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define RED "\e[0;31m"
int main(int argc, char *argv[])
{
	if(argc==3)
	{
		if((strcmp(argv[1],"-d")==0)||(strcmp(argv[1],"-delete")==0))
		{
				int largoSet=(int)strlen(argv[2]);
				int primera;
				int largoAct;
				char str[1000];
				int j;
				primera=getchar();
				while(primera!=EOF)
				{
					fgets(str,1000,stdin);
					for(int i=strlen(str);i>=0;i--)
					{
						str[i+1]=str[i];
					}
					str[0]=primera;
					if(str[strlen(str)-1]=='\n') str[strlen(str)-1]='\0';
					for(int i=0;i<strlen(str);i++)
					{
						j=0;
						while((str[i]!=argv[2][j])&&(j<largoSet)) j++;
						if(str[i]==argv[2][j])
						{
							for(int ind=i;ind<strlen(str);ind++) str[ind]=str[ind+1];
						}		
					}
					printf("%s\n",str);
					primera=getchar();
				}
		}
		else 
		{
			char str[1000];
			int primera;
			int indiceArg1=(int)strlen(argv[1]);
			int indiceArg2=(int)strlen(argv[2]);
			primera=getchar();
			while(primera!=EOF)
			{
				fgets(str,1000,stdin);
				for(int i=strlen(str);i>=0;i--)
				{
					str[i+1]=str[i];
				}
				str[0]=primera;
				if(str[strlen(str)-1]=='\n') str[strlen(str)-1]='\0';
				for(int i=0;i<strlen(str);i++)
				{
					int j=0;
					while((str[i]!=argv[1][j])&&(j<indiceArg1)) j++;
					if(str[i]==argv[1][j])
					{
						if(j<indiceArg2) str[i]=argv[2][j];
						else str[i]=argv[2][indiceArg2-1];
					}
				}
				printf("%s\n",str);
		  	primera=getchar();
			}
		}
	return 0;
	}
	else
	{
		if(((argc==2)&&((strcmp(argv[1],"-h")==0)||(strcmp(argv[1],"-help")==0))))
		{
			printf("Modo de empleo: tr [OPCIÓN]... CONJUNTO1 [CONJUNTO2]\n");
			return 0;
		}
		else
		{
					fprintf(stderr,RED "SE INGRESARON DE FORMA ERRONEA LOS ARGUMENTOS\n");
		}
	}
	return 1;
}
