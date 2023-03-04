#include<iostream>
using namespace std;

int main()
{
	int x[2][50] = { {0},{10, 6, 8, 7, 15, 3, 9, 13, 12, 5, 14, 16} };

	//keys 10, 6, 8, 7, 15, 3, 9, 13, 12, 5, 14, 16
	int i,p=12;
	for (i = 0; i < 50; i+=2,p++)
	{
		if (x[0][i]!=0)
		{
			if (x[0][i] < x[0][i + 1])
			{
				x[1][p] = x[0][i + 1];
				x[0][p] = x[0][i];
			}
			else
			{
				x[1][p] = x[0][i];
				x[0][p] = x[0][i + 1];
			}
		}
		else
		{
			if (x[1][i]<x[1][i+1])
			{
				x[1][p] = x[1][i + 1];
				x[0][p] = x[1][i];
			}
			else
			{
				x[1][p] = x[1][i];
				x[0][p] = x[1][i + 1];
			}
		}
	}
	for ( i = 0; i < 24; i++)
	{
		cout << x[1][i]<<" ";
	}
	return 0;
}