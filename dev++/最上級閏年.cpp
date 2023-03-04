#include<stdio.h>
#include<stdlib.h>
int main()
{
	int year,a,b,c,d,e;
	d=0;
	scanf("%d%d%d",&year,&b,&e);
	c=(year%400==0)||((year%4==0)&&(year%100!=0));
	for(a=2;a<=b;a++)
	{
		if(a<8&&a%2==0)
		{
			d=d+31;
		}
		else if(a<8&&a%2==1)
		{
			d=d+30;
		}
		else if(a>=8&&a%2==0)
		{
			d=d+30;
		}
		else if(a>=8&&a%2==1)
		{
			d=d+31;
		}
	}
	
	if(c==1&&b>2)
	{
		d=d-1;
	}
	else if(c==0&&b>2)
	{
		d=d-2;
	}
	if(b>=7)
	d=d+1;
	d=d+e;
	printf("%d",d);
	system("pause");
	return 0;
}
