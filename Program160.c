// file in  open then write  then close in c program
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>//micro file

int main()
{
	int fd=0,iRet=0; //file disscipter
	char Fname[30];
	char Data[]="Marvellous Infosystem";
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDWR); 
	if(fd==-1)
	{
		printf("Unable to open file\n");
			return -1;//return to OS
	}
	else
	{
		printf("Succesful file opend with FD :%d\n",fd);
	
	}
	 //////////    data madhle letter count 
  
	iRet=write(fd,Data,22);
	printf("%d bytes gets successfully written in the file\n",iRet);
	
	
	
	return 0;
}