#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

double fun(int x[],int i){
	if(i==0){
		return x[0];
	}
	return x[i]+fun(x,i-1);
}
class calculate{
	public:
		int siz;
		int *x;
		calculate(int s){
			siz=s;
			 x=new int[siz];
		}
		void get_data(int i,int xx){
			*(x+i)=xx;
		}
		double total(){
		double y;
		int z,zz;
		y=fun(x,siz-1)*1000;
		z=y;
		zz=z%1000;
		if(zz%10>4){
			zz=zz/10+1;
		}
		else{
			zz=zz/10;
		}
		zz=zz*10;
		z=z/1000;
		z=z*1000;
		z=z+zz;
		y=(double)z/1000;
		return y;
		}
		double average(){
			
		double y;
		int z,zz;
		y= (fun(x,siz-1)/siz) *1000;
		z=y;
		zz=z%1000;
		if(zz%10>4){
			zz=zz/10+1;
		}
		else{
			zz=zz/10;
		}
		zz=zz*10;
		z=z/1000;
		z=z*1000;
		z=z+zz;
		y=(double)z/1000;
		return y;
			
		
		}
		double median(){
			int *v=x;
			for(int i=0;i<siz;i++){
				for(int j=0;j<siz;j++){
					if(*(v+j)>*(v+i)){
						int p;
						p=*(v+j);
						*(v+j)=*(v+i);
						*(v+i)=p;
					}
				}
			}
	int s=siz;
	if(s%2==0){
	//	return (double)(x[s/2]+x[s/2-1])/2;
		
			double y;
		int z,zz;
		y= (double)(x[s/2]+x[s/2-1])/2*1000;
		z=y;
		zz=z%1000;
		if(zz%10>4){
			zz=zz/10+1;
		}
		else{
			zz=zz/10;
		}
		zz=zz*10;
		z=z/1000;
		z=z*1000;
		z=z+zz;
		y=(double)z/1000;
		return y;
	}
	else{
	//	return x[s/2];
				double y;
		int z,zz;
		y= (double)x[s/2]*1000;
		z=y;
		zz=z%1000;
		if(zz%10>4){
			zz=zz/10+1;
		}
		else{
			zz=zz/10;
		}
		zz=zz*10;
		z=z/1000;
		z=z*1000;
		z=z+zz;
		y=(double)z/1000;
		return y;
	}
	}
		
	
};




int main(){	int size, i, value;
cout<<"Input size of the array:"<<endl; // Assume Input 12
cin>>size;
calculate cal(size); // Build an object cal
cout<<"Input values of the array:"<<endl; //設 input: 11 1 5 2 8 7 12 4 -6 -10 1 5
for(i=0; i<size; i++)
 { cin>>value;
 cal.get_data(i,value);
 }
cout<<"總 合 (sum) = "<<cal.total()<<endl; // output 40.00
cout<<"平均值 (mean) = "<< cal.average()<<endl; // output 3.33
cout<<"中位數 (median) ="<< cal.median() << endl; // output 4.50
}
