#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b){
	if(a%b==0){
		return b;
	}
	return gcd(b,a%b);
}
int main(){
	int a,b=0,i,x[100],j;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<a;i++){
		for(j=i+1;j<a;j++){
		if(gcd(x[i],x[j])==1){
			b=b+1;
		}	
		}
	}
		printf("%d",b);
	return 0;
}
//		printf("%d",x[i]);
