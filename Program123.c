#include<stdio.h>

int CountFrequency(char *str, char ch)
{
	int iCnt = 0;
	if(str == NULL)
	{
		return -1;
	}
	while(*str != '\0')
	{
		if(*str == ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[30]; 
	char cValue = '\0';
	int iRet = 0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s" ,Arr);
	
	printf("Enter Character \n");
	scanf(" %c", &cValue); // IMP    space imp because 
	
	iRet = CountFrequency(Arr,cValue);
	
	printf("Frequency is: %d\n", iRet);
	
	return 0;
	}
