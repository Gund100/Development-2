//count letter

#include<stdio.h>

void Count(char *str)     // strlen
{
	int CCnt = 0; int SCnt =0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			CCnt++;
		}
		else if((*str >= 'a') && (*str <= 'z'))
		{
			SCnt++;
		}
		str++;
	}
	printf("Capital letters are : %d\n",CCnt);
	printf("Small letters are : %d\n" ,SCnt);
}

int main()
{
	char Arr[20]; 
	
	
	printf("Enter String\n");
	scanf("%[^'\n']s", Arr);
	
	Count(Arr);
	
	return 0;
}