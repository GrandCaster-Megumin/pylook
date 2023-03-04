#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
void fun(char x[]){
	int i;
	i=strlen(x)-1;
	char *a,*b,*c,aa;
	a=x;
	b=&x[i];
	while(b!=a&&c!=a){
	c=b;
	aa=*a;
	*a=*b;
	*b=aa;
	a++;
	b--;
}
	
}


int main(){
	int a;
	cin>>a; 
	char x[a];
	getchar();
	
//	fgets(x,a+1,stdin);
cin>>x;
	fun(x);
	cout<<x;
	
	return 0;
}
