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
sample<int> A;//�إ�, �b sample ���O�غc�l�����ϥΪ̤��O��J��
//�Ʀ��� x �}�C�P y �}�C���U 5 ����Ƹ��
A.sort();//���O�磌�� A ��Ʀ��� x �}�C�P y �}�C�i��Ѥp��j�Ƨ�
A.merger();//�X�֪��� A �� x �}�C�P y �}�C��Ƥ��e�� z �}�C��
A.display();//�L�X z �}�C�����e
sample<double>B;
B.sort();
B.merger();
B.display();
system("pause");
return 0;
}
