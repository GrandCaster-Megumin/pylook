#include<iostream>
using namespace std;
class quick
{
public:
	quick() {}
	void quicksort(int *A,int  p, int r)
	{
		if (p < r)
		{
			int q = Partition(A,p,r);
			quicksort(A, p, q - 1);
			quicksort(A, q + 1, r);
		}
	}
	int Partition(int *A,int p,int r)
	{
		int x = A[r];
		int i = p - 1;
		for (int j = p; j <= r-1; j++)
		{
			if (A[j]<=x)
			{
				i = i + 1;
				swap(A[j], A[i]);
			}
		}
		swap(A[i + 1], A[r]);
		return i + 1;
	}
private:

};

int main()
{
	cout << "123\n";
	int n = 9;
	int arr[] = { 2,8,7,1,3,5,6,4 };
	quick qq;
	qq.quicksort(arr, 0, 7);
	system("pause");
}
