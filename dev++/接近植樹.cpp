#include <stdio.h>
#include <stdlib.h>
int fun (int a){
	int b;
	for(b=2;b<a;b++)
	{
		if(a%b==0)
     {
     	return 0;

	 }
	}
	return a;
}
int main()
{
	int a,b;
	scanf("%d",&b);
	for(a=2;a<=b;a++){
	if(fun(a)==b){
	printf("%d ",fun(a));	
	return 0;
	}
	if(a==b){
		b=b+1;
	}
	} 
}
