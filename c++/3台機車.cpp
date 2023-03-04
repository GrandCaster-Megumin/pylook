#include<cstdlib>
#include<iostream>
#include<string>
#include<ctime>
#include <sstream>
using namespace std;
class motor{
	protected:
	string brand;
	double fuel;
	double speed;
	double km;
	public:
	static int num;
	motor(string str="",double a=0,double b=0){
	brand=str;
	fuel=a;
	speed=b;
		
		num++;
	}
	~motor(){
		num--;
	}
	motor(const motor&x){
		num++;
	}
	void calKM(){
		km=fuel*15;
		cout<<fuel*15;
	}
	virtual void show(){
		cout<<"品牌"<<brand<<"油量"<<fuel<<"速度"<<speed;
		cout<<"跑多遠";
		 calKM(); 
	}
	
};
 int motor::  num=0;
 class electricMotor:public motor
 {
 	int seat;
 	public:
 
 	electricMotor(string str="",double a=0,double b=0,int st=0):seat(st),motor(str,a,b){
/*		brand=str;
	fuel=a;
	speed=b;
*/
 	
	 }	
	 	void calKM(){
		km=fuel*20;
		cout<<fuel*20;
	}
 virtual	void show(){
		cout<<"動機車品牌:"<<brand<<"座位數"<<seat<<"油量"<<fuel<<"速度"<<speed;
		cout<<"可行駛公里數";
		 calKM(); 
	}
 };
 class raceMotor:public motor
 {
 	string type;
 	public:
 	raceMotor(string str="",double a=0,double b=0,string s=""):motor(str,a,b){
 		/*brand=str;
		fuel=a;
		speed=b;
*/
 		
 		type=s;
	 }
	 void calKM(){
	 	if(speed>60){
	 			km=fuel*10;
		cout<<fuel*10;	
		 }
	else{
		km=fuel*12;
		cout<<fuel*12;
	}
	}
virtual	void show(){
		cout<<endl<<"競技機車品牌:"<<brand<<"型號"<<type<<"油量"<<fuel<<"速度"<<speed;
		cout<<"可行駛公里數";
		 calKM(); 
		 cout<<endl;
	}
 };
 void output( motor &x){
 	x.show();
 } 
int main()
{ motor A ("光陽", 8, 50);//機車品牌：光陽 油量:8 速度：50 可行駛公里數：120
electricMotor B("Gogoro",10, 25,2);//座位數 2
raceMotor C("華洋賽車", 15,150, "TT150");//型號 TT 150
output(A);//輸出 機車品牌：光陽 油量:8 速度：50 可行駛公里數：120
output(B);//輸出 電動機車品牌：Gogoro 座位數：2 油量:10 速度：25 可行駛公里數：200
output(C);//輸出 競技機車品牌：華洋賽車 型號： TT150 座位數:2 油量：15 速度：150
//可行駛公里數：150
cout<<"建立機車數: "<<motor::num<<endl; // output 建立機車數: 3

system("pause");
 return 0;
}



