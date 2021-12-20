//capital to small or small to capital

#include<stdio.h>

char Toggle( char c)
{
	if((c >= 'A') && (c <= 'Z'))
	{
		return c + 32;
	}
	else if((c >= 'a') && (c <= 'z'))
	{
		return c - 32;
	}
	
}
int main()
{
	char ch = '\0'; char cRet = '\0';
	
	printf("Enter character\n");
	scanf("%c" ,&ch);
	
	cRet = Toggle(ch);
	printf("Toggle letter is : %c", cRet);
	
	
	return 0;
}