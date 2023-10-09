#include<stdio.h>
main()
{
	int	 *p;
	char data[100];
	p=fopen("demo1.txt","r");
	if(p==0)
	{
		printf("Could not open file.");
	}
	else
	{
	while(fgets(data,50,p)!=0)
	{
		printf("%s",data);
	}
		fclose(p);
	}	
}