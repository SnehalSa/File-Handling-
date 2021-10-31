//Create new file in c program
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
	int fd=0; //file disscipter
	char Fname[30];
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd=creat(Fname,0777);//0777 permission
	
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