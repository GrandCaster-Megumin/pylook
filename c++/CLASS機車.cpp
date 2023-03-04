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
		cout<<"跑多遠"<<fuel*15;
		}
		void show(){
			cout<<"車牌"<<brand<<"油量"<<fuel<<"數度"<<speed;
			calKM();
		}
		
};

int motor::	count=0;





int main()
{ motor A("三陽",10, 50);
 motor B("光陽", 15,60);
 motor C(A);//複製 A 物件, 建立 C 物件
 cout<<"已建立機車數"<<motor::count<<endl; // output 3
 C.show(); //output 機車品牌：三陽 油量：10 速度：50 可行駛公里數：150

return 0;
}

