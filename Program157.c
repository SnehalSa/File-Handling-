//Create new file in c program
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
	int fd=0; //file disscipter
	fd=creat("Marvellous.txt",0777);
	
	if(fd==-1)
	{
		printf("Unable to create file\n");
	}
	else
	{
		printf("Succesfully create file\n");
	}
	
	
	
	
	
	return 0;
}