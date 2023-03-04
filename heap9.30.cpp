#include<iostream>
using namespace std;
class heap
{
	int A[11] = { -1,16,14,10,4,7,9,3,2,8,1};
	int heap_size = 10;
public:
	heap()
	{
		Build_heap();
		for (int i = heap_size; i > 1; i--)
		{
			swap(A[1], A[i]);
			heap_size = heap_size - 1;
			heapify(1);
		}
	}

	void Build_heap()
	{
		//heap_size = 9;
		for (int i = heap_size / 2; i >=1; i--)
		{
			heapify(i);
		}
	}
	void heapify(int i)
	{
		int left, right, largest=0;
		left = i * 2;
		right = i * 2 + 1;
		if (A[left] > A[i]&& left<=heap_size)
		{
			largest = left;
		}
		else
		{
			largest = i;
		}
		if (A[right] > A[largest]&& right<=heap_size)
		{
			largest = right;
		}
		if (largest != i)
		{
			swap(A[i], A[largest]);
			heapify(largest);
		}
	}
	void P()
	{
		for (int i = 1; i < 11; i++)
		{
			cout << A[i]<<" ";
		}
	}

};

int main()
{
	cout << "123\n";
	heap h;
	h.P();
}