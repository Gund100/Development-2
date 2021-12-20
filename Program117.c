//count small letter

#include<stdio.h>

int SmallCount(char *str)     // strlen
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20]; int iRet = 0;
	
	
	printf("Enter String\n");
	scanf("%[^'\n']s", Arr);
	
	iRet = SmallCount(Arr);  
	printf("Small character is : %d\n", iRet);
	
	return 0;
}