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
		cout<<"�~�P"<<brand<<"�o�q"<<fuel<<"�t��"<<speed;
		cout<<"�]�h��";
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
		cout<<"�ʾ����~�P:"<<brand<<"�y���"<<seat<<"�o�q"<<fuel<<"�t��"<<speed;
		cout<<"�i��p������";
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
		cout<<endl<<"�v�޾����~�P:"<<brand<<"����"<<type<<"�o�q"<<fuel<<"�t��"<<speed;
		cout<<"�i��p������";
		 calKM(); 
		 cout<<endl;
	}
 };
 void output( motor &x){
 	x.show();
 } 
int main()
{ motor A ("����", 8, 50);//�����~�P�G���� �o�q:8 �t�סG50 �i��p�����ơG120
electricMotor B("Gogoro",10, 25,2);//�y��� 2
raceMotor C("�جv�ɨ�", 15,150, "TT150");//���� TT 150
output(A);//��X �����~�P�G���� �o�q:8 �t�סG50 �i��p�����ơG120
output(B);//��X �q�ʾ����~�P�GGogoro �y��ơG2 �o�q:10 �t�סG25 �i��p�����ơG200
output(C);//��X �v�޾����~�P�G�جv�ɨ� �����G TT150 �y���:2 �o�q�G15 �t�סG150
//�i��p�����ơG150
cout<<"�إ߾�����: "<<motor::num<<endl; // output �إ߾�����: 3

system("pause");
 return 0;
}



