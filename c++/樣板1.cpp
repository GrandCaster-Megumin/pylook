#include<cstdlib>
#include<iostream>
using namespace std;
template<class T>
class sample{
	T x[5],y[5],z[10];
	public:
	sample(){
	for(int i=0;i<5;i++){
		cin>>x[i];
	}
		for(int i=0;i<5;i++){
		cin>>y[i];
	}
	}
	void sort(){
		T xx;
		for(int i=0;i<5;i++){
			for(int j=i+1;j<5;j++){
			if(x[i]>x[j]){
				xx=x[i];
				x[i]=x[j];
				x[j]=xx;
			}	
			}
		}
			for(int i=0;i<5;i++){
			for(int j=i+1;j<5;j++){
			if(y[i]>y[j]){
			xx=y[i];
			y[i]=y[j];
			y[j]=xx;
			}	
			}
		}
	}
	void merger(){
		for(int i=0,j=0,k=0,f=0;k<10;k++){
			if(i==5){
				f=1;
			z[k]=y[j];
			j++;
			}
			if(j==5){
			f=1;
			z[k]=x[i];
			i++;
			}
			if(x[i]<y[j]&&f==0){
				z[k]=x[i];
				i++;
			}
			else if(x[i]>y[j]&&f==0){
				z[k]=y[j];
				j++;
			}
		}
	}
	void display(){
		for(int i=0;i<10;i++){
			cout<<z[i]<<" ";
		}
	}
};

int main()
{
sample<int> A;//建立, 在 sample 類別建構子中讓使用者分別輸入資
//料成員 x 陣列與 y 陣列的各 5 筆整數資料
A.sort();//分別對物件 A 資料成員 x 陣列與 y 陣列進行由小到大排序
A.merger();//合併物件 A 的 x 陣列與 y 陣列資料內容到 z 陣列中
A.display();//印出 z 陣列的內容
sample<double>B;
B.sort();
B.merger();
B.display();
system("pause");
return 0;
}
