#include<iostream>
using namespace std;
int main()
{
	//10, 6, 8, 7, 15, 3, 9, 13, 12, 5, 14, 16
	int x[30],a,currentnode;
	for (int i = 1; i < 30; i++)
	{
		cin >> a;
		x[i] = a;
		currentnode = i ;
		while(a<x[currentnode / 2])
		{
			x[currentnode] = x[currentnode / 2];
			currentnode = currentnode / 2;
		}
		x[currentnode] = a;
		for (int j = 1; j<=i; j++)
			cout << x[j]<<" ";
		cout << endl;
	}
	
}