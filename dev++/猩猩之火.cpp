#include<stdio.h>
#include<stdlib.h>
int main()
{
	int z,a,b,c,d;
//	scanf("%d",&z);
//	switch(z)
//	{
//	case 1:	
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=b;c++)
		{
			printf("*");
		}
			printf("\n");
	}
//		break;
//	case 2:
//	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=1+a-b;c>0;c=c-1)
		{
			printf("*");
		}
			printf("\n");
	}
//	break;
//	case 3:
//	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(d=0;d<b-1;d++)
		{
		printf(" ");
		}
		for(c=1+a-b;c>0;c=c-1)
		{

			printf("*");
		}
			printf("\n");
	}
//	break;
//	case 4:
//	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=a-b;c>0;c=c-1)
	
		{
		printf(" ");
		}
	for(d=0;d<b;d++)
		{

			printf("*");
		}
			printf("\n");
	}
//	break;		
//} 
	system("pause");
	return 0;
}

