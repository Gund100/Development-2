#include<iostream>
using namespace std;
typedef unsigned int UINT;

int CountBit(int iNo)
{
	int i = 0; int iCnt = 0; int iResult = 0;
	int iMask = 0x00000001;
	
	for(i = 1; i < 32; i++,iMask = iMask << 1)
	{
		
		if((iNo & iMask) == iMask)
		{
			iCnt++;
		}
	}
		
	return iCnt;
		
}

int main()
{
	UINT iValue = 0; int iRet = 0;
	
	cout<<"Enter number\n";
	cin>> iValue;
	
	iRet = CountBit(iValue);
	cout<<"Number of bits which are ON is : "<<iRet<<"\n";
	
	return 0;
}