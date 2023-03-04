#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include<cstdlib>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	int sum,sim,sm;
	char a,b,c,d,e,f,g,h,i;
	cout<<"A";
	cin>>a;
	cout<<"B";
	cin>>b;
	cout<<"C";
	cin>>c;
	cout<<"D";
	cin>>d;
	cout<<"E";
	cin>>e;
	cout<<"F";
	cin>>f;
	cout<<"G";
	cin>>g;
	cout<<"H";
	cin>>h;
	cout<<"I";
	cin>>i;

	int r,fff=0;	
	for(r=1;r<100;r++){
		
	if(a>='A'&&a<='F'){
	sum=sum+(a-'A'+10)*r*r;
	}
	else{
		sum=sum+(a-'0')*r*r;
	}
//	cout<<sum;
	if(b>='A'&&b<='F'){
	sum=sum+(b-'A'+10)*r;
	}
	else{
		sum=sum+(b-'0')*r;
	}
	//	cout<<sum;
	if(c>='A'&&c<='F'){
	sum=sum+(c-'A'+10);
	}
	else{
		sum=sum+(c-'0');
	}
	//	cout<<sum;
	if(d>='A'&&d<='F'){
	sum=sum+(d-'A'+10)*r*r;
	}
	else{
		sum=sum+(d-'0')*r*r;
	}
	//	cout<<sum;
	if(e>='A'&&e<='F'){
	sum=sum+(e-'A'+10)*r;
	}
	else{
		sum=sum+(e-'0')*r;
	}
	//	cout<<sum;
	if(f>='A'&&f<='F'){
	sum=sum+(f-'A'+10);
	}
	else{
		sum=sum+(f-'0');
	}
	//	cout<<sum;
	if(g>='A'&&g<='F'){
	sim=sim+(g-'A'+10)*r*r;
	}
	else{
		sim=sim+(g-'0')*r*r;
	}
	//	cout<<endl<<sim;
	if(h>='A'&&h<='F'){
	sim=sim+(h-'A'+10)*r;
	}
	else{
		sim=sim+(h-'0')*r;
	}
	//		cout<<sim;
	if(i>='A'&&i<='F'){
	sim=sim+(i-'A'+10);
	}
	else{
		sim=sim+(i-'0');
	}
	//		cout<<sim;
	
	if(sum==sim){
	//	cout<<sum<<endl<<sim<<endl;
		cout<<r;
		fff=1;
		break;
	}	
	sum=0;
	sim=0;
		
	}
	if(fff==0){
		cout<<"µL¸Ñ";
	}
	
	return 0;
}
