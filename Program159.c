//open  file in c program
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>//micro file

int main()
{
	int fd=0; //file disscipter
	char Fname[30];
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDWR); //macro in capital//RDONLY//RDWRITE
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("Succesful file opend with FD :%d\n",fd);
	}
	
	
	
	
	
	return 0;
}