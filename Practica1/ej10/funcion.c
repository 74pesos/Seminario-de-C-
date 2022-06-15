int comparar(char x)
{
	int comp;
	if(x>='A' && x<='Z')
	{
		comp=1;
	}
	else
	{
		if(x>='a' && x<='z')
		{
			comp=0;
		}
	}
	return(int) comp;
}
