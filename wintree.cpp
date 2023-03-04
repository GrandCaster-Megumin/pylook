#include<iostream>
using namespace std;
int main()
{
	int x[50] = {10, 6, 8, 7, 15, 3, 9, 13, 12, 5, 14, 16} ;

	//keys 10, 6, 8, 7, 15, 3, 9, 13, 12, 5, 14, 16
	int i, p = 12;
	for (i = 0; i < 50; i += 2, p++)
	{
		if (x[i] > x[i + 1])
		{
			x[p] = x[i + 1];
		}
		else
		{
			x[p] = x[i];
		}
	}
	for (i = 0; i < 23; i++)
	{
		cout << x[i] << " ";
	}
	return 0;


}