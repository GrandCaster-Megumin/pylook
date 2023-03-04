
#include <iostream>
#include<cstdlib>
#include<math.h>
#include<string.h>
using namespace std;
class Date{
	private:
	int month,day,year;
	public:
	Date(int m,int d,int y):month(m),day(d),year(y){
		if(m<13&&m>0){
			month=m;
		}
		else {
			month=1;
		}
	}
	void setMonth(int m){
		if(m<13&&m>0){
		month=m;
		}
		else {
			month=1;
		}
	}
	void setDay(int d){
		day=d;
	}
	void setYear(int y){
		year=y;
	}  
	int getMonth(){
		return month;
	}
	int getDay(){
		return day;
	}
	int getYear(){
		return year;
	}
	void displayDate(){
		cout<< month<<'/'<<day<<'/'<<year;
	}
};


int main()
{
 Date date( 5, 6, 1981 ); // create a Date object for May 6, 1981
 // display the values of the three Date data members
 cout << "Month: " << date.getMonth() << endl; //output 5
 cout << "Day: " << date.getDay() << endl;// output 6
 cout << "Year: " << date.getYear() << endl;//output 1981
 cout << "\nOriginal date:" << endl;
 date.displayDate(); // output 5/6/1981
 // modify the Date
 date.setMonth( 13 ); // invalid month
 date.setDay( 1 );
 date.setYear( 2005 );
 cout << "\nNew date:" << endl;
 date.displayDate(); // output 1/1/2005	
	return 0;
}
