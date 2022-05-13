#include <stdio.h>
int main()
{
	int res,dia,mes,anio;
	do
	{
		while((res=scanf("%2d/%2d/%4d",&dia,&mes,&anio))==0)
		{
			fprintf(stderr,"Error, ingrese de nuevo: ");
			getchar();
		}
		printf("scanf retorno %d\n",res);
		if (res!=EOF)
		{
			if(res!=3)
			{
				printf("ERROR: el formato debe ser dd/mm/yyyy\n");
			}
			else
			{
				printf("Fecha: %d/%d/%d\n",dia,mes,anio);
			}
		}
	} while(res!=EOF);
	return 0;
}
