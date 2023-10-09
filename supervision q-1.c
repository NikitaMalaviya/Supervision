#include<stdio.h>
main()
{
	int *P;
	char data[1000];
	P=fopen("demo1.txt","w");
	if(P==0)
	{
		printf("open file");
	}
	else
	{
		printf("enter the data=");
		gets(data);
		fputs(data,P);
		printf("file open succesfully");
	}
	fclose(P);
}