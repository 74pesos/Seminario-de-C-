int factorial(int x)
{
	int facto=1;
	while(x != 0) 
	{
		facto*=x--;
	}
	return (int) facto;	
}
