//open then  whole data  display
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>//micro file

int main()
{
	int fdsrc=0,fddest=0,iRet=0; //file disscipter
	char Fname1[30];
    char Fname2[30];
	char Buffer[1024];  //mug//1024byte =1kb//System buffer apla local buffer
	
	printf("Enter source file name\n");
	scanf("%s",Fname1);
	
	
	fdsrc=open(Fname1,O_RDONLY); 
	if(fdsrc==-1)
	{
		printf("Unable to open file\n");
			return -1;//return to OS
	}
	else
	{
		printf("Succesful file opend with FD :%d\n",fdsrc);
	
	}
	printf("Enter destinaton file name\n");
	scanf("%s",Fname2);//rikami badli
	fddest=creat(Fname2,0777);
	
	
   printf("Data from file is : \n");
  while((iRet=read(fdsrc,Buffer,sizeof(Buffer)))!=0)
  {
	  write(fddest,Buffer,iRet);
	  
  }
	
	close(fdsrc);
	close(fddest);
	
	
	return 0;
}