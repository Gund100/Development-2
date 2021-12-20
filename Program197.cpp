#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleOnRange(UINT iNo,int iStart,int iEnd)
{           	
	return (iNo ^(0xFFFFFFFF << (iStart -1)) & (0xFFFFFFFF >> (32 - iEnd)));
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