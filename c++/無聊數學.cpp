#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
class shape{
	public:
	virtual void printname()=0;
	virtual double area()=0;
	virtual double volume()=0;
};
class Ball:public shape{
	string x;
	int y;
	public:
	Ball(string x,int y){
	this->x=x;
	this->y=y;
	}
	virtual void printname(){
		cout<<x<< endl;
	}
	virtual double area(){
		return 3.14*4*y*y;
	}
	virtual double volume(){
		return 3.14*4/3*y*y*y;
	}
};
class Cylinder:public shape{
	string x;
	int y;
	int z;
	public:
Cylinder(string x,int y,int z){
	this->x=x;
	this->y=y;
	this->z=z;
	}
	virtual void printname(){
		cout<<x<< endl;
	}
	virtual double area(){
		return 3.14*y*y+3.14*2*y*z;
	}
	virtual double volume(){
		return 3.14*y*y*z;
	}
};
class Cube:public shape{
	string x;
	int y;
	public:
	Cube(string x,int y){
	this->x=x;
	this->y=y;
	}
	virtual void printname(){
		cout<<x<< endl;
	}
	virtual double area(){
		return 6*y*y;
	}
	virtual double volume(){
		return y*y*y;
	}
};
class Pyramid:public shape{
	string x;
	int y;
	int z;
	public:
Pyramid(string x,int y,int z){
	this->x=x;
	this->y=y;
	this->z=z;
	}
	virtual void printname(){
		cout<<x<< endl;
	}
	virtual double area(){
		return y*y+2*y*sqrt(pow((y/2),2)+z*z);
	}
	virtual double volume(){
		return (double)y*y*z/3;
	}
};
int main()
{
shape *ptr[4];
Ball a_ball("a_ball", 10);//10 為 半徑
Cylinder a_cylinder("a_cylinder", 10, 5);// 10 為半徑, 5 為高
Cube a_cube("a_cube", 10);// 10 為邊長
Pyramid a_pyramid("a_pyramid", 10, 5);//10 為邊長, 5 為高
ptr[0] = &a_ball;
ptr[1] = &a_cylinder;
ptr[2] = &a_cube;
ptr[3] = &a_pyramid;
int i;
for (i = 0; i < 4; i++)
{
ptr[i]->printname();
cout << ptr[i]->area() << endl;
cout << ptr[i]->volume() << endl;
cout << endl;
}
system("pause");
return 0;
}
