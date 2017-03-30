int hashFunction(char *s, int T)
{
#define BASE 127

	int h =0;
	int temp;

	for(; *s != 0; s++)
	{
		temp =(BASE * h + *s);
		if(temp <0) temp = -temp;
		h=temp % T;
	}

	return h;
}