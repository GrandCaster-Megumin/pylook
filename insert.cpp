#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<fstream>
#include<ctime>

using namespace std;
class Sort
{
protected:
	string line, field;
	vector<vector<string>>array,arraytest;
	vector<string>v;
public:
	Sort()//建構時把資料輸入
	{
		ifstream inFile("100.csv", ifstream::in);

		while (getline(inFile, line))
		{
			v.clear();
			stringstream str(line);

			while (getline(str, field, ','))
			{
				v.push_back(field);
			}
			array.push_back(v);
		}
		inFile.close();
	}
	void print()
	{
		//確定是否傳入成功
		for (size_t i = 1; i < array.size(); ++i)
		{
			for (rsize_t j = 0; j < array[i].size(); ++j)
			{
				cout << array[i][j] << " ";
			}
			cout << "\n";
		}
	}
	void printtest()
	{
		//印出結果
		cout << "前五" << endl;
		for (size_t i = 1; i <6; ++i)
		{
			for (rsize_t j = 0; j < arraytest[i].size(); ++j)//arraytest[i].size()
			{
				cout << arraytest[i][j] << " ";
			}
			cout << "\n";
		}
		cout << "後五" << endl;
		for (size_t i = arraytest.size()-5; i < arraytest.size(); ++i)
		{
			for (rsize_t j = 0; j < arraytest[i].size(); ++j)//arraytest[i].size()
			{
				cout << arraytest[i][j] << " ";
			}
			cout << "\n";
		}
	}
	void insert(vector<string>e, int i)//照課本打
	{
		arraytest[0] = e;
		while (atoll(e[4].c_str()) < atoll(arraytest[i][4].c_str()))
		{
			arraytest[i + 1] = arraytest[i];
			i--;
			if (i == 0)
			{
				break;
			}
		}
		arraytest[i + 1] = e;
	}
	void insertionsort(int n)
	{
		arraytest = array;
		for (int j = 2; j <= n; j++)
		{
			if (j % 1000 == 0)
			{
				cout << j<<endl;
			}
			vector<string> temp = arraytest[j];
			insert(temp, j - 1);
		}
	}
	void quick(int left, int right)//課本do改while版
	{
		if (left<right)
		{
			int i = left+1, j = right;
			long long pivot = atoll(arraytest[left][4].c_str());
			while (i < j)
			{
				while (atoll(arraytest[i][4].c_str()) <= pivot&&i<right)
				{
					i++;
				}
				while (atoll(arraytest[j][4].c_str()) > pivot &&j>left)
				{
					j--;
				}
				if (i < j )
				{
					swap(arraytest[i], arraytest[j]);

				}
			}

			swap(arraytest[left], arraytest[j]);
			quick(left, j-1);
			quick(j+1, right);
		}
	}
	void quicksort(int left, int right)
	{
		arraytest = array;
		quick(left, right);
	}
	void Mergesort(int n) //照課本打
	{
		arraytest = array;
		vector<vector<string>> tempList;
		tempList.clear();
		for (size_t i = 0; i < n; i*=2)
		{
			MergePass(arraytest, tempList, n, i);
			i *= 2;
			MergePass(tempList, arraytest, n, i);
		}
		tempList.clear();
	}
	void MergePass(vector<vector<string>>initList, vector<vector<string>> resultList,int n,int s)
	{
		size_t i;
		for ( i = 1; i < n-2*s+1; i+=2*s)
		{
			Merge(initList, resultList, n,i, i + s - 1, i + 2 * s - 1);
		}
		if ((i+s-1)<n)
		{
			Merge(initList, resultList,n, i, i + s - 1, n);
		}
		else
		{
			while (i < n)
			{
				resultList[i] = initList[i];
				 i++;
			}
		}
	}
	void Merge(vector<vector<string>>initList, vector<vector<string>> resultList,int nn, int left, int mid,int right)
	{
		int a = left;
		int b = mid;
		int n = nn;
		int ct = left; 
		while (a < mid && b <= right && b < n && a < n) {
			if (atoll(initList[a][1].c_str()) <= atoll(initList[b][1].c_str())) {
				resultList[ct++] = initList[a];
				a++;
			}
			else if (atoll(initList[a][1].c_str()) > atoll(initList[b][1].c_str())) {
				resultList[ct++] = initList[b];
				b++;
			}

		}
		while (a < mid && a < n) {
			resultList[ct++] = initList[a];
			a++;
		}
		while (b <= right && b < n) {
			resultList[ct++] = initList[b];
			b++;
		}
	}
	void HeapSort(int n) //照課本打
	{
		arraytest = array;
		for (int i = n/2; i >=1; i--)
		{
			Adust(i, n);
		}
		for (int i = n-1; i >=1; i--)
		{
			swap(arraytest[1],arraytest[i+1]);
			Adust(1, i);
		}
	}
	void Adust(int root,int n)
	{
		vector<string> e = arraytest[root];
		int i;
		for (i = 2*root; i <= n; i*=2)
		{
			if (i < n && atoll(arraytest[i][4].c_str()) < atoll(arraytest[i+1][4].c_str()))
			{
				i++;
			}
			if (atoll(e[4].c_str()) >= atoll(arraytest[i][4].c_str()))
			{
				break;
			}
			arraytest[i / 2] = arraytest[i];
		}
		arraytest[i / 2] = e;
	}
};
void getdata(string Data[], string FileName, int index) //參考朋友資料
{
	ifstream inFile(FileName, ifstream::in);
	string line, field;
	vector<vector<string>> array;
	vector<string> v;
	while (getline(inFile, line)) {
		v.clear();
		stringstream str(line);
		while (getline(str, field, ',')) {
			v.push_back(field);
		}
		array.push_back(v);
	}
	for (size_t i = 1; i < array.size(); i++) {
		Data[i - 1] = array[i][index];
	}
}
template <class T> //參考朋友資料
void Merge(T InitData[], T MageData[], int n, int left, int mid, int   right) {
	int a = left;
	int b = mid;
	int ct = left;
	while (a < mid && b <= right && b < n && a < n) {
		if (atoll(InitData[a].c_str()) <= atoll(InitData[b].c_str())) {
			MageData[ct++] = InitData[a];
			a++;
		}
		else if (atoll(InitData[a].c_str()) > atoll(InitData[b].c_str())) {
			MageData[ct++] = InitData[b];
			b++;
		}

	}
	while (a < mid && a < n) {
		MageData[ct++] = InitData[a];
		a++;
	}
	while (b <= right && b < n) {
		MageData[ct++] = InitData[b];
		b++;
	}
}
template <class T>
void MergePass(T InitData[], T MageData[], int s, int n) {
	int i;
	for (i = 0; i <= n - 2 * s + 1; i = i + 2 * s) {
		Merge(InitData, MageData, n, i, i + s, i + 2 * s - 1);
	}
	if ((i + s) < n) {
		Merge(InitData, MageData, n, i, i + s, n);
	}
	else
		for (; i < n; i++)
			MageData[i] = InitData[i];

}
template <class T>
void MergeSort(T Data[], int n) {
	T* tempData = new T[n + 1];
	for (int s = 1; s < n; s = s * 2) {
		MergePass(Data, tempData, s, n);
		s = s * 2;
		MergePass(tempData, Data, s, n);
	}

	delete[] tempData;
}
template <class T>
void printtestt(T data[], int n) {
	cout << "前五筆 \n";
	for (int i = 0; i < 5; i++)
		cout << data[i] << "\n";
	cout << endl << "後五筆: \n";
	for (int i = n - 5; i < n; i++)
		cout << data[i] << "\n";
	cout << endl;
	cout << endl;
}
int main()//編譯Sort要在atoll(initList[a][b].c_str()) 改b的位置
{
	string temp[1000000];
	string data[1000000];
	getdata(data, "100w.csv", 4);
	clock_t start, end;
	//Sort s;
	//s.print();
	cout << "計時開始"<<endl;
	start = clock();
	//s.insertionsort(1000000);
	//s.quicksort(1, 1000000);
	//s.HeapSort(1000000);
	//s.insertionsort(100);
	//s.quicksort(1, 10000);
	//s.Mergesort(10);
	//s.HeapSort(10000);
	MergeSort(data,1000000);
	printtestt(data,1000000);
	end = clock();
	//s.printtest();
	cout << "插入排序花了" << (end - start) << "毫秒" << endl;
}