#include<iostream>
#include<cstdlib>
using namespace std;

class circle{
private:
	double r;
	public:
	circle(double iv){
		
	}
	circle(){
	cout<<"123";
	}
		
 void set(double a){
  r=a;
 }
int get(){
	return r;
}
void per(){
	cout<<r*r*3.14<<"\n"<<2*r*3.14;
}



};
int main(){
	double y;
	cin>>y;
circle x;
x.set(y);
cout<<x.get()<<endl;
x.per();

	return 0;
}
