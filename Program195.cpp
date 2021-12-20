#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleOnRange(UINT iNo,int iStart,int iEnd)
{
	UINT iResult = 0;            
	UINT iMask1 = 0xFFFFFFFF;  UINT iMask2 = 0xFFFFFFFF; UINT iMask = 0;
	iMask1 = iMask1 << (iStart - 1);
	iMask2 = iMask2 >> (32- iEnd);
	iMask = iMask1 & iMask2;
	
	iResult = iNo | iMask;
	
	return iResult;
}

int main()
{
	UINT iValue = 0; UINT iRet = 0; int i =0 , j = 0;
	
	cout<<"Enter number\n";
	cin>> iValue;
	cout<<"Enter straing position\n"
	cin>>i;
	
	cout<<"Enter ending position\n"
	cin>>j;
	
	iRet = ToggleONRange(iValue,i,j);
	cout<<"Updated number is : "<<iRet<<"\n";
	
	return 0;
}