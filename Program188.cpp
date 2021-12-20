#include<iostream>
using namespace std;
typedef unsigned int UINT;

/*
op1	op2	&	|	^
0	0	0	0	0
0	1	0	1	1
1	0	0	1	1
1	1	1	1	1
*/

UINT ToggleBit(UINT iNo,int iPos)
{
	if((iPos < 1) || (iPos > 32))
	{
		return 0;
	}
	int iResult = 0;
	UINT iMask = 0x00000001 << (iPos - 1);
	
	iResult = iNo ^ iMask;
	
	return iResult;
}

int main()
{
	int iValue = 0; UINT iRet = 0; int iPosition = 0;
	
	cout<<"Enter number\n";
	cin>> iValue;
	
	cout<<"Enter the position of bit\n";
	cin>>iPosition;
	
	iRet = ToggleBit(iValue,iPosition);
	cout<<"Updated number is : "<<iRet<<"\n";
	
	return 0;
}