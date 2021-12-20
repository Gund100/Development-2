#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0;   int iSum = 0;   int i =0;  int iRet = 0;
	char Fname[30];
	char Buffer[10];
	
	printf("Enter the file name\n");
	scanf("%s", Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	

	while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0) 
	{
		iSum = iSum + iRet;
	}
	printf(" Total Number of byte is : %d\n",iSum);
	
	close(fd);
	
	return 0;
}