#include<cstdlib>
#include<iostream>
#include<string>
#include<ctime>
#include <sstream>
using namespace std;
void englishTyping(string x){
	cout<<x<<endl;
	string y;
	getline(cin,y);
	int i=0,k=0;
	while(i<y.length()){
	if(x[i]!=y[i]){
		cout<<"第"<<i<<"字元錯誤"<<endl;
		k+=1; 
	}
	i++;
	}
	cout<<"共有"<<k<<"個錯誤"<<endl;
	cout<<"正確率"<<(double)(y.length()-k)/y.length()*100;
}

int main()
{
srand(time(NULL));
string e[30] = {"agree", "appear", "arrange", "ask", "claim",
"consent", "decide", "demand", "deserve", "except",
"fail", "forget", "hesitate", "hope", "intend",
"learn", "manage", "mean", "need", "offer",
"plan", "prepare", "pretend", "promise", "refuse",
"seem", "tend", "threaten", "wait", "want"};
string model;
for(int i=0; i<3; i++) {
int r = rand() % (30);
model += e[r];
if(i<2)
model += " ";
}
englishTyping(model);
 system("pause");
 return 0;
}

