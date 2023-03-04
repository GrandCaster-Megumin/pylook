#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c,i,m=1,n=1;
	double x;
	scanf("%d%d",&a,&b);
for(i=2;a-i>=a-2*b;i+=2)
{
	m=m*(a-i);

}
for(i=2;i+1<=2*b-1;i+=2)
{
		n=n*(1+i);
}
x=(double)m/n;
printf("%lf",x);
	return 0;
}
