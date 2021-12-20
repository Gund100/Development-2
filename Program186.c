#include<iostream>
using namespace std;

class Marvellous
{
	public:
	Addition(int iValue1,int iValue2)
	{
		return iValue1 + iValue2;
	}
}

int main()
{
	int iNo1 = 0; int iRet = 0;
	int iNo2 = 0;
	
	cout<<"Enter the first number\n";
	cin>>iNo1;
	
	cout<<"Enter the second number\n";
	cin>>iNo2;
	
	Marvellous mobj;
	iRet = mobj.Addition(iNo1,iNo2);
	
	cout<<"Addition is : "<<iRet<<"\n";
	
	return 0;
}