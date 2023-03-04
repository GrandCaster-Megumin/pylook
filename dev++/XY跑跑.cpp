#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,y,a,b,c,m;
	x=y=c=0;
	m=4;
	while(scanf("%d%d",&a,&b)!=EOF)
    {
	switch(m)
	{
		case 4:
		y=y+c;
		if(b==1)
	{
		m=3;
	}
	else if(b==2)
	{
		m=1;
	}
		break;
	case 1:
		x=x+c;
		if(b==1)
	{
		m=4;
	}
	else if(b==2)
	{
		m=2;
	}
		break;	
	case 3:
		x=x-c;
	if(b==1)
	{
		m=2;
	}
	else if(b==2)
	{
		m=4;
	}
		break;
	case 2:
		y=y-c;
	if(b==1)
	{
		m=1;
	}
	else if(b==2)
	{
		m=3;
	}
		break;
    }
    c=a-c;
    c=a;
  }
  printf("(%d,%d)",x*10,y*10);
}
