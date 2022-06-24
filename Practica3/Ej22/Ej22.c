#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if(argc>1)
	{
		if(argc==3)
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
		printf("SE INGRESARON MAL LOS ARGUMENTOS\n");
	}
	return 1;
}
