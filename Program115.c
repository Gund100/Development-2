//Capital to small

#include<stdio.h>

char CapitaltoSmall( char c)
{
	if((c >= 'A') && (c <= 'Z'))
	{
		return c + 32;
	}
	
}
int main()
{
	char ch = '\0'; char cRet = '\0';
	
	printf("Enter character\n");
	scanf("%c" ,&ch);
	
	cRet = CapitaltoSmall(ch);
	printf("Capital letter is : %c", cRet);
	
	
	return 0;
}