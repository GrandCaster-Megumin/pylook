#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int fun (int n){
	int x,a,b,c,d=0,e=0;
	double f,g;
	x=n;
	for(a=0;n>0;a++){
		n=n/10;//a位數 
	}
	for(b=1;b<a;b++){
		c=x/pow(10,b);
		d=c%10;
		e=e+pow((double)d,a);
	}
	f=x%10;
	g=pow(f,a);
	if(e+g==x){
return e+g;
}
else{
	return 0;
}
}
int main(){
	int m,n,a=0;
	scanf("%d%d",&m,&n);
	while(n>=m){
		if(fun(m)==0){
			m=m+1;
		}
		else{
		printf("%d\n",fun(m));
		m=m+1;
		a=a+1;
		}	
	}
	printf("共%d個",a);
	return 0;
}
