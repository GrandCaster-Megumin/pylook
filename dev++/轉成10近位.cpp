#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int transform(int base,int n){
int a,b=0,c=1;
for(a=1;n>0;a++){
	c=c*base;
	if(a==1){
	c=1;
	}
	b=b+n%10*c;//c�v�v�� 
	n=n/10;//n�N�J�Ʀr 
}
	return b;
}
int main()
{
	int a,b,x,y;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
	scanf("%d%d",&x,&y);
	printf("%d\n",transform( x,y));
}
	return 0;
}
