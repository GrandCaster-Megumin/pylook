#include<cstdlib>
#include<iostream>
using namespace std;
int gcd(int n,int m)
{
        if(m==0)
                return n;
        else{
        	 return gcd(m,n%m);     	 
		}      
}
class RationalNumber
{public:
	int x,y;
 RationalNumber( int a= 0, int b= 1 ):x(a),y(b){
 }
 RationalNumber operator +( RationalNumber &); // addition
 RationalNumber operator -( RationalNumber & ); // subtraction
 RationalNumber operator *( RationalNumber & ); // multiplication
 RationalNumber operator /( RationalNumber & ); // division
 // relational operators
 bool operator< ( RationalNumber & ) ;//更 < 笲衡
 
 // equality operators
 bool operator== (RationalNumber & ) ;// 更==笲衡
 
 void printRational() ; // Τ瞶计
private:
 int numerator; // だ
 int denominator; // だダ
 void reduction(); // тだ籔だダ程そ计癸だ籔だダ秈︽て虏
}; // end class RationalNumber
void RationalNumber::printRational(){
	int a=gcd(x,y);
	x=x/a;
	y=y/a;
	if(y==1){
		cout<<x;
	}
	else
	cout<<x<<'/'<<y;
} 
RationalNumber RationalNumber::operator+( RationalNumber & fun){
	RationalNumber ff;
	ff.x=(x*fun.y)+(fun.x*y);
	ff.y=y*fun.y;
	return ff;
} 
RationalNumber RationalNumber::operator-( RationalNumber & fun){
	RationalNumber ff;
	ff.x=(x*fun.y)-(fun.x*y);
	ff.y=y*fun.y;
	return ff;
} 
RationalNumber RationalNumber::operator*( RationalNumber & fun){
	RationalNumber ff;
	ff.x=x*fun.x;
	ff.y=y*fun.y;
	return ff;
} 
RationalNumber RationalNumber::operator/( RationalNumber & fun){
	RationalNumber ff;
	ff.x=x/fun.x;
	ff.y=y/fun.y;
	return ff;
} 
bool RationalNumber::operator<( RationalNumber & fun){
	if(x*fun.y<fun.x*y){
		return 1;
	} 
	else
	return 0;
} 
bool RationalNumber::operator==( RationalNumber & fun){
	if(x*fun.y==fun.x*y){
		return 1;
	} 
	else
	return 0;
} 
int main()
{
RationalNumber c(7, 3), x;
RationalNumber d(3, 9);
c.printRational();
cout << " + ";
d.printRational();
cout << " = "; 
x = c + d;  
x.printRational();
cout << '\n';
c.printRational();
cout << " - ";
d.printRational();
cout << " = ";
x = c - d; x.printRational();
cout << '\n';

c.printRational();
cout << " * ";
d.printRational();
cout << " = ";
x = c * d; 
x.printRational();
cout << '\n';

c.printRational();
cout << " / ";
d.printRational();
cout << " = ";
x = c / d; 
x.printRational();

if (c<d)
 cout << " \nc<d\n";
 else cout << " \nc>=d\n"; 
// test overloaded less than operator

if (c==d)
 cout << "c==d\n";
 else cout << "c!=d\n"; 
// test overloaded less than operator
 
 system("pause");
return 0;
} // end main
