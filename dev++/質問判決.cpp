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
	return 1;
}
int main()
{
	int a,b;
	for(a=2;a<=100;a++)
	
	if(fun(a)==1){
		printf("%d ",a);
	
	} 
	return 0;
}
