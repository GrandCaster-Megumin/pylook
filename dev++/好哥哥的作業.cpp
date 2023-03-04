#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int fun(int x,int y){
int a,b;
a=1;
while(a<=x&&a<=y){
if(x%a==0 && y%a==0)
   {
       b=a;
   }
a++;
}
return b;
}
int main(){
srand(time(NULL));
int a,i,j,k,l,x,y,o;
char q;
  for(a=0;a<100;a++){
	i=rand()%9+1,j=rand()%9+1,k=rand()%9+1,l=rand()%9+1,q=rand()%4+1;
	while(i==j||k==l){
	i=rand()%9+1,j=rand()%9+1,k=rand()%9+1,l=rand()%9+1;
  }
printf("\t");
	switch (q){
	case 1:
	q='+';
	x=i*l+j*k;
    y=j*l;
    o=fun(x,y);
	if(y/o==1){
	printf("(%d)%d/%d %c %d/%d=%d  ",a+1,i,j,q,k,l,x/o);
    }  
    else{
	printf("(%d)%d/%d %c %d/%d=%d/%d",a+1,i,j,q,k,l,x/o,y/o);
    }
	break;
	case 2:
	q='-';
	x=i*l-j*k;
    y=j*l;
    o=fun(abs(x),y);
	if(y/o==1){
	printf("(%d)%d/%d %c %d/%d=%d  ",a+1,i,j,q,k,l,x/o);
    }  
    else{
	printf("(%d)%d/%d %c %d/%d=%d/%d",a+1,i,j,q,k,l,x/o,y/o);
    }
	break;
	case 3:
	q='*';
	x=i*k;
	y=l*j;
    o=fun(abs(x),y);
   	if(y/o==1){
	printf("(%d)%d/%d %c %d/%d=%d  ",a+1,i,j,q,k,l,x/o);
    }  
    else{
	printf("(%d)%d/%d %c %d/%d=%d/%d",a+1,i,j,q,k,l,x/o,y/o);
    }
	break;
	case 4:
	q='/';
	x=i*l;
	y=k*j;
    o=fun(abs(x),y);
   	if(y/o==1){
	printf("(%d)%d/%d %c %d/%d=%d  ",a+1,i,j,q,k,l,x/o);
    }  
    else{
	printf("(%d)%d/%d %c %d/%d=%d/%d",a+1,i,j,q,k,l,x/o,y/o);
    }
	break;
}
	if(a%2!=0){
	printf("\n");
	}
}
return 0;
} 
