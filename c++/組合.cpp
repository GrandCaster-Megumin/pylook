#include<cstdlib>
#include<iostream>
using namespace std;
class Point{
	protected:
		
	public:
		int x,y;
		Point(int a,int b){
			x=a;
			y=b;
		}
	int getx(){
		return x;
	}
	int gety(){
		return y;
	}	
};
class Square{
			protected:
				
		int const area(){
			return ps.x*ps.y;
		}
		public:
		Point ps;	
		Square(int a,int b):ps(a,b){
}
		int const getarea(){
		return area();
		}
};
class Cube
{
	protected:
		int z;
		int const volume(){
			return sc.getarea()*z;
		}
		public:
			Square sc;
			Cube(int a=0,int b=0,int zz=0):sc(a,b){
				z=zz;
			} 
			void setpoint(int a,int b,int c){
				sc.ps.x=a;
				sc.ps.y=b;
				z=c;
			}
			int getz(){
				return z;
			}
		int const getvolume(){
			return volume();
		}	
};

int main()
{
Cube p1;
p1.setpoint(5, 5, 5);
cout << "�y�� = " << "p1(" << p1.sc.ps.getx()
 << ", " << p1.sc.ps.gety()
 << ", " << p1.getz() << ')' << endl;
cout << "xy ���n = " << p1.sc.getarea() << " ���褽��" << endl;
cout << "xyz ��n = " << p1.getvolume() << " �ߤ褽��" << endl;
int a, b, c;
cout << "\n �п�J x, y, z �y�СG";
cin >> a >> b >> c;
Cube p2;
p2.setpoint(a, b, c);
cout << "�y�� = " << "p2(" << p2.sc.ps.getx()
 << ", " << p2.sc.ps.gety()
 << ", " << p2.getz() << ')' << endl;
cout << "xy ���n = " << p2.sc.getarea() << " ���褽��" << endl;
cout << "xyz ��n = " << p2.getvolume() << " �ߤ褽��" << endl;
cout << endl;

system("pause");
return 0;
}

