#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
//abcde  fghij  klmno  pqrst  uvwxyz
int main()
{
	int fd = 0;
	char Arr[10];
	
	fd = open("LB17.txt",O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	// 0  from starting position
	// 1  from current position
	// 2  from end position
	
	lseek(fd,5,0); // abcde chya pudhche 
	
	read(fd,Arr,5);  // fghij
	write(1,Arr,5);
	
	printf("\n");
	
	lseek(fd,5,1);   //klmno chya pudhche
	
	read(fd,Arr,5);  // pqrst
	write(1,Arr,5);
	
	close(fd);
	
	return 0;
}