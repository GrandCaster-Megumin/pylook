#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a/50;
	c=a%50/10;
	d=a%50%10/5;
	e=a%50%10%5;
	printf("50じ:%d\n10じ:%d\n5じ:%d\n1じ:%d",b,c,d,e);
	system("pause");
	return 0;
}
