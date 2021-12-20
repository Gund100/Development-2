#include<iostream>
using namespace std;

int ToggleBit(int iNo,int iPos1,int iPos2)
{
	int iResult = 0;
	int iMask1 = 0x00000001 << (iPos1 - 1);
	int iMask2 = 0x00000001 << (iPos2 - 1);
	int iMask = 0;
	
	iMask = iMask1 | iMask2;
	
	iResult = iNo ^ iMask;
	
	return iResult;
}

int main()
{
	int iValue = 0; int iRet = 0; int iPosition1 = 0; int iPosition2 = 0;
	
	cout<<"Enter number\n";
	cin>> iValue;
	
	cout<<"Enter the position number first\n";
	cin>>iPosition1;
	
	cout<<"Enter position number second\n";
	cin>>iPosition2;
	
	iRet = ToggleBit(iValue,iPosition1,iPosition2);
	cout<<"Updated number is : "<<iRet<<"\n";
	
	return 0;
}