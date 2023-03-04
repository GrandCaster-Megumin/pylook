#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,i,j,n,A;
	scanf("%d",&a);
	d=a;
	n=d;
	while(a%10>0)
	{
		a=a/10;
		b=b+1;
	}
	c=b-1;
	e=pow((double)10,c);
	for(j=1;j<=b;j++){
	if((d/e)%10!=n%10)
{
	A=0;
}
else{
	A=1;
}
  printf("%d",(d/e)%10);
   printf("%d",n%10);	
	e=e/10;
	n=n/10;
}
 
if(A==0)
{
	printf("§_");
}
if(A==1)
{
	printf("¬O");
}
system("pause");
return 0;
}
