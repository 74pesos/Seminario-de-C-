int sumar(int n)
{
	int i;
	int suma=0;
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			suma+=i;
		}
	}
	return (int) suma;
}
