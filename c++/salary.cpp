#include<iostream> 
#include<cstdlib>
#include<cstring>
using namespace std;
class Employee
{
	private:
	string  name;
	protected:
	
	int salary;
	public:
	static int num;
	Employee(){
		num++;
	}
	virtual void getSalary()=0;
	virtual void	getName()=0;
};
class Manager:public Employee 
{
	private:
	string  name;
	public:
	 Manager(string x):name(x){
	 }
	virtual void getSalary(){
		cout<<"40000";
	}
	virtual void	getName(){
		cout<<name;
	}
};
class Engineer:public Employee 
{
	private:
	string  name;
	public:
	 Engineer(string x):name(x){
	 }
	virtual void getSalary(){
		cout<<"35000";
	}
	virtual void	getName(){
		cout<<name;
	}
};
int Employee::num=0; 
int main()
{
Employee *array[10];
Manager A("Terry");
Engineer B("Sam");
Engineer C("Mary");
Engineer D("Helen");
Manager E("John");
array[0]=&A;
array[1]=&B;
array[2]=&C;
array[3]=&D;
array[4]=&E;
for(int i=0; i<Employee::num; i++)
{
array[i]->getName();
cout<<"\t";
array[i]->getSalary();
cout<<endl;
}
system("pause");
return 0;

}
