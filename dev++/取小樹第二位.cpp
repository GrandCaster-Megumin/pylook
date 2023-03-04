	#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main(){ 
		double y;
		cin>>y;
		int z,zz;
		y= (y/12) *1000;
		z=y;
		zz=z%1000;
		if(zz%10>4){
			zz=zz/10+1;
		}
		else{
			zz=zz/10;
		}
		zz=zz*10;
		cout<<zz<<endl;
		z=z/1000;
		cout<<z<<endl;
		z=z*1000;
		cout<<z<<endl;
		z=z+zz;
		cout<<z<<endl;
		y=(double)z/1000;
		cout<<y;
		return 0;
	}
