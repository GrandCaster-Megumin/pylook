#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
class motor{
	
	private:
		
		string brand;
		double fuel;
		double speed;
		double km;
	public:
		static int count;
		motor(string a,double o=0,double s=0):brand(a),fuel(o),speed(s){
			count++;
		}
		motor(){
			count++;
		}
	   ~motor(){
		count--;
		}
		motor(const motor &a){
			brand=a.brand;
			fuel=a.fuel;
			speed=a.speed;
			km=a.km;
			count++;
		}
		void calKM(){
		cout<<"�]�h��"<<fuel*15;
		}
		void show(){
			cout<<"���P"<<brand<<"�o�q"<<fuel<<"�ƫ�"<<speed;
			calKM();
		}
		
};

int motor::	count=0;





int main()
{ motor A("�T��",10, 50);
 motor B("����", 15,60);
 motor C(A);//�ƻs A ����, �إ� C ����
 cout<<"�w�إ߾�����"<<motor::count<<endl; // output 3
 C.show(); //output �����~�P�G�T�� �o�q�G10 �t�סG50 �i��p�����ơG150

return 0;
}

