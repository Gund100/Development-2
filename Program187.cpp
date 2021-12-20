#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
using namespace std;

class MarvellousFile
{
	public:
	char Fname[30];
	int fd = 0;
	MarvellousFile(char *Name)
	{
		cout<<"Inside constructor\n";
		strcpy(Fname,Name);
		fd = open(Fname,O_RDWR);
	}
	~MarvellousFile()
	{
	close(fd);	
	}
	
	void Display()
	{
		int iRet = 0;
		char Buffer[10];
		
		lseek(fd,0,0);
		
		while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
		{
			write(1,Buffer,iRet);
		}
	}
		
	int  CountCapital()
	{
		int iRet = 0; int i = 0; int iCnt= 0; 
		char Buffer[10];
		
		lseek(fd,0,0);
		
		while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
		{
			for(i = 0;i < iRet; i++)
			{
				if((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
		
	}
	
	int CountSmall()
	{
		int iRet = 0; int i = 0; int iCnt = 0;
		char Buffer[10];
		
		lseek(fd,0,0);
		
		while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
		{
			for(i = 0;i < iRet; i++)
			{
				if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
		
	}
	
	int CountDigit()
	{
		int iRet = 0; int i = 0; int iCnt = 0;
		char Buffer[10];
		
		lseek(fd,0,0);
		
		while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
		{
			for(i = 0;i < iRet; i++)
			{
				if((Buffer[i] >= '0') && (Buffer[i] <= '9'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
		
	}
	
};

int main()
{
	char ArrName[30]; int iRet = 0;
	cout<<"Enter the name of file\n";
	cin>>ArrName;
	
	MarvellousFile mobj(ArrName);
	mobj.Display();
	
	iRet = mobj.CountCapital();
	cout<<"Capital character is : "<<iRet<<"\n";
	
	iRet = mobj.CountSmall();
	cout<<"Small character is : "<<iRet<<"\n";
	
	iRet = mobj.CountDigit();
	cout<<"Digit is : "<<iRet<<"\n";
	
	return 0;
}