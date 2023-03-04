#include<stdio.h>
#include<stdlib.h>
int main(){
	long long a[10]{1,6,23,789,1234},b[10],c[20];
	for(int i=0;i<6;i++)
	{
	scanf("%d",&b[i]);
	}
	int i=0,j=0,k=0;
	while(k<11){
		if(a[i]<b[j]){
			c[k]=a[i];
			k=k+1;
			i=i+1;
			if(a[i]==0){
				c[k]=b[j];
				k=k+1;
				j=j+1;
			}
		}
		else{
			c[k]=b[j];
			k=k+1;
			j=j+1;
			if(b[i]==0){
				c[k]=a[i];
				k++;
				i++;
			}
		}
		
	}
	
	
	
	for(int i=0;i<k;i++)
	{
		printf("%lld,",c[i]);
	}
		
	return 0;
}
