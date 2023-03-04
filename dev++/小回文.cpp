#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i=0;
int fun(char a[],int f){
	if(f<0){
		return 1;
	}
if(a[i]==a[f]){
return (a[i+1],f-1);
}
return 0;
}
int main(){
char a[10],f,g,h=0;
int k=0;
scanf("%s",a);	
f=strlen(a);	
	
if(fun(a,f-1)==0){
	printf("遞回no");	
}
else{
	printf("遞回yes");
}	

g=strlen(a)-1;
//printf("%d",g);
while(f>=0){
if(a[k]==a[g]){	
k++;
g--;
}
else{
	h=1;
	break;
}
}
if(g==-1){
	h=0;
}
if(h==0){
printf("一般yes");
}
else
{
		printf("一般no");
}
	return 0;
}
