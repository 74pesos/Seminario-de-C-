double divisionx(int var1,int var2)
{
	printf("Variables %d %d\n",var1,var2);
	double div;
	if(var1 >= var2)
	{
		div = var1 / var2;
		printf("%f\n",div);
	}
	else
	{
		div = var2 / var1;
		printf("%f\n",div);
	}
	return (double) div;
}
