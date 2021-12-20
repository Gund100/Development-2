#include<stdio.h>
#include<stdbool.h>

bool ChkPallindrome(char *str)
{
	char *end = NULL;
	bool flag = true;
	
	end = str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(str < end)
	{
		if(*str != *end)
		{
			flag = false;
			break;
		}
		str++;
		end--;
	}
	return flag;
}

int main()
{
	char Arr[30]; 
	bool bRet = false;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	bRet = ChkPallindrome(Arr);
	if(bRet == true)
	{
		printf("It is Pallindrome\n");
	}
	else
	{
		printf("It is not pallindrome\n");
	}
	
	return 0;
}
