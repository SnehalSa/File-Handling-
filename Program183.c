#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>//micro file

//hole in file

int  main()
{
 int fd=0,iRet=0;
 char fname[20];

 printf("Enter file name\n");
 scanf("%s",fname);
 fd=open(fname,O_RDWR);
 if(fd==-1)
 {
	 printf("Unable to open the file\n");
	 return -1;
 }
 iRet=lseek(fd,0,2);
 
 
 printf("File size is :%d\n",iRet);
	
	return 0;
}