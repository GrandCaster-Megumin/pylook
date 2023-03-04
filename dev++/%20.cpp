#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i=0,sum=0,y;
	char x[20];
	gets(x);
	while(x[i]!='\0'){
	if(x[i]==' '){
	sum=sum+1;
}
	i=i+1;
}
y=strlen(x)-1;
while(y>0){
if(x[y]!=' '){
x[y+(sum*2)]=x[y];
y=y-1;
}
else{
x[y+(sum*2)]='0';	
y=y-1;
x[y+(sum*2)]='2';
y=y-1;
x[y+(sum*2)]='%';
y=y+1;	
sum=sum-1;
}

}

i=0;
	while(x[i]!='\0'){
printf("%c",x[i]);
i=i+1;
}


/*
printf("%d",y);
printf("%s",x);
printf("%d",sum);//空白數量 
// \0*/
return 0;
}
