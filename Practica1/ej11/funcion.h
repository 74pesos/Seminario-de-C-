char convertir(char x)
{
	char caracter;
	if(x>=0x41 && x<=0x5A)
	{
		caracter=x+0x20;
	}
	else
	{
		if(x>=0x61 && x<=0x7A)
		{
			caracter=x-0x20;
		}
	}

	return(char) caracter; 
}
