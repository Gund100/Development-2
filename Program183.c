#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0;  int iRet = 0;
	char Fname[30];
	
	printf("Enter the file name\n");
	scanf("%s", Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	iRet = lseek(fd,0,2);
	
	printf("File size is : %d\n",iRet);
	close(fd);
	
	return 0;
}


//File Def = no.of space of stream of file. 