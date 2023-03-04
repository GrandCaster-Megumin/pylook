#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
int a,i;
char x[6]={'2','3','1','4','5','6'},y,xx;

cin>>a;
getchar();
for(i=0;i<a;i++){
	cin>>y;	
	switch(y){
		case 'n':
		xx=x[5];
		x[5]=x[0];
		x[0]=x[2];
		x[2]=x[4];
		x[4]=xx;
		break;	
		case 's':
		xx=x[5];
		x[5]=x[4];
		x[4]=x[2];
		x[2]=x[0];
		x[0]=xx;
		break;
		case 'w':
		xx=x[5];
		x[5]=x[1];
		x[1]=x[2];
		x[2]=x[3];
		x[3]=xx;
		break;
		case 'e':
		xx=x[5];
		x[5]=x[3];
		x[3]=x[2];
		x[2]=x[1];
		x[1]=xx;
		break;
	}
}
	cout<<x[2];
	return 0;
}
