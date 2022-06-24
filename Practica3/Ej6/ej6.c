#include <stdio.h>
void imprimir(int v[],int diml)
{
	int actual;
	for(int i=0;i<diml;i++)
	{
		for(int j=0;j<diml;j++)
		{
			if(v[j]>v[j+1])
			{
				actual=v[j];
				v[j]=v[j+1];
				v[j+1]=actual;
			}	
		}
	}
	printf("Impresion del vector de forma ascendente\n");
	for(int i=0;i<diml;i++) printf("%d, ",v[i]);
	printf("\n");
	
}
int main()
{
	int vector[]={44,100,233,4,7676,33,5454};
	int diml=sizeof(vector)/sizeof(vector[0]);
	printf("Impresion del vector como viene\n");
	for(int i=0;i<diml;i++) printf("%d, ",vector[i]);
	printf("\n\n");
	imprimir(vector,diml);
	return 0;
}
