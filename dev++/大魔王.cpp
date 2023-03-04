#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	while(scanf("%d",&a)!=EOF)
    {
    	c=a;
    	for(;a>0;a=a/10)
    	{
		b+=1;        
        } 
        for(d=1;b>=d;d=d+1)
        {
        e=pow((double)10,d);
		f=c%10;
		g=c/e%10;
		h=h+g;
		}
		printf("%d\n",f+h);
        b=0,e=0,f=0,g=0,h=0; 
   }
   	   system("pause");
   return 0;
}
