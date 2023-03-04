#include<iostream>
#include <queue>
using namespace std;
class Graph
{
public:
	bool IsEmpty()
	{
		if (n == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int NumberOfVertics()
	{
		return n;
	}
	int NumberOfEdges()
	{
		return e;
	}
	int Degree(int u)
	{
		for (int i = 0; i < n; i++)
		{
			int sum=0;
			if (Matrices[u][i] == 1)
			{
				sum++;
			}
			return sum;
		}
	}
	bool ExistsEdge(int u, int v)
	{
		if (Matrices[u][v] == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void InserVertex()
	{
		if (IsEmpty())
		{
			Matrices = new int* [1];
			for (int i = 0; i < 1; i++)
			{
				Matrices[i] = new int[1];
				//每一列有 m 行(columns); array[i] 指向新 new 出的 m 個 int
			}
			for (int i = 0; i < 1; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					Matrices[i][j] = 0;
				}
			}
			n++;
		}
		else
		{
			NewArray();
		}
	}
	void InserEdge(int u, int v)
	{
		Matrices[u][v] = 1;
		Matrices[v][u] = 1;
	}
	void DeleteVertex(int v)
	{
		int** array;
		array = new int* [n-1];
		//此矩陣有 n 個列(rows); 先 new 出 n 個 int *
		for (int i = 0; i < n-1; i++)
		{
			array[i] = new int[n-1];
			//每一列有 m 行(columns); array[i] 指向新 new 出的 m 個 int
		}
		for (int i = 0, aim=0; i < n; i++)
		{
			if (i != v)
			{
				for (int j = 0, aimm = 0; j < n; j++)
				{
					if (j != v)
					{
						array[aim][aimm] = Matrices[i][j];
						aimm++;
					}
				}
				aim++;
			}	
		}
		for (int i = 0; i < n; i++)
		{
			delete[] Matrices[i];
		}
		delete[] Matrices;

		Matrices = new int* [n -1];
		//此矩陣有 n 個列(rows); 先 new 出 n 個 int *
		for (int i = 0; i < n - 1; i++)
		{
			Matrices[i] = new int[n - 1];
			//每一列有 m 行(columns); array[i] 指向新 new 出的 m 個 int
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < n - 1; j++)
			{
				Matrices[i][j] = 0;
			}
		}
		for (int i = 0; i < n-1; i++)
		{
			for (int j = 0; j < n-1; j++)
			{
				Matrices[i][j] = array[i][j];
			}
		}
		for (int i = 0; i < n-1; i++)
		{
			delete[] array[i];
		}
		delete[] array;
		n = n -1;
	}
	void DeleteEdge(int u, int v)
	{
		Matrices[u][v] = 0;
		Matrices[v][u] = 0;
	}
	void NewArray()
	{
		int** array;
		array = new int* [n];
		//此矩陣有 n 個列(rows); 先 new 出 n 個 int *
		for (int i = 0; i < n; i++)
		{
			array[i] = new int[n];
			//每一列有 m 行(columns); array[i] 指向新 new 出的 m 個 int
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				array[i][j] = Matrices[i][j];
			}
		}
		
		for (int i = 0; i < n; i++)
		{
			delete[] Matrices[i];
		}
		delete[] Matrices;

		Matrices = new int* [n+1];
		//此矩陣有 n 個列(rows); 先 new 出 n 個 int *
		for (int i = 0; i < n+1; i++)
		{
			Matrices[i] = new int[n+1];
			//每一列有 m 行(columns); array[i] 指向新 new 出的 m 個 int
		}
		for (int i = 0; i < n + 1; i++)
		{
			for (int j = 0; j < n + 1; j++)
			{
				Matrices[i][j] = 0;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				Matrices[i][j] = array[i][j];
			}
		}
		for (int i = 0; i < n; i++)
		{
			delete[] array[i];
		}
		delete[] array;
		n = n + 1;
		/*
		int** array;
		array = new int* [n];
		//此矩陣有 n 個列(rows); 先 new 出 n 個 int *
		for (int i = 0; i < n; i++)
		{
			array[i] = new int[n];
			//每一列有 m 行(columns); array[i] 指向新 new 出的 m 個 int
		}

		 動態矩陣用完後還給系統, 好習慣!怎麼 new 來的就怎麼還 !
		for (int i = 0; i < n; i++)
		{
			delete[] array[i];
		}
		delete[] array;*/
	}
	void CheckMatrices()
	{
		for (int i = 0; i < n ; i++)
		{
			for (int j = 0; j < n ; j++)
			{
				cout<<Matrices[i][j]<<" ";
			}
			cout << endl;
		}
	}
	void DFS(int v)
	{
		cout << "DFS=> ";
		visited = new bool[n];
		for (int i = 0; i < n; i++)
		{
			visited[i] = false;
		}
		DFS(v,'1');
		delete[] visited;
		cout << endl;
	}
	void DFS(int v,char trush)
	{
		visited[v] = true;
		cout << v << " ";
		for (int i = 0; i < n; i++)
		{
			if (Matrices[v][i] == 1&&visited[i]==false)
			{
				DFS(i,'1');
			}
		}
	}
	void BFS(int v)
	{
		cout << "BFS=> ";
		visited = new bool[n];
		for (int i = 0; i < n; i++)
		{
			visited[i] = false;
		}
		queue<int> q;
		int now;
		q.push(v);
		visited[v] = true;
		while (!q.empty())
		{
			now = q.front();
			cout << now << " ";
			q.pop();
			for (int i = 0; i < n; i++)
			{
				if (Matrices[now][i] == 1)
				{
					if (visited[i] == false)
					{
						visited[i] = true;
						q.push(i);

					}
				}
			}
		}
		delete[] visited;
		cout << endl;
	}
	void componets()
	{
		cout << "componets=> ";
		visited = new bool[n];
		for (int i = 0; i < n; i++)
		{
			visited[i] = false;
		}
		for (int i = 0; i < n; i++)
		{
			if (visited[i]==false)
			{
				OutpotNewComponent();
				DFS(i, '1');
				flag = true;
			}
		}
		flag = false;
		delete[] visited;
	}
	void OutpotNewComponent()
	{
		if (flag == true)
		{
			cout << "OutpotNewComponent=> ";
		}		
	}
	void SpanningTreeBFS(int v)
	{
		cout << "SpanningTreeBFS"<<endl;
		int** array;
		array = new int* [n];
		//此矩陣有 n 個列(rows); 先 new 出 n 個 int *
		for (int i = 0; i < n; i++)
		{
			array[i] = new int[n];
			//每一列有 m 行(columns); array[i] 指向新 new 出的 m 個 int
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				array[i][j] = 0;
			}
		}
		visited = new bool[n];
		for (int i = 0; i < n; i++)
		{
			visited[i] = false;
		}
		queue<int> q;
		int now,before=-1;
		q.push(v);
		visited[v] = true;
		while (!q.empty())
		{
			now = q.front();
			q.pop();
			for (int i = 0; i < n; i++)
			{
				if (Matrices[now][i] == 1)
				{
					if (visited[i] == false)
					{
						visited[i] = true;
						q.push(i);
						array[now][i] = 1;
						array[i][now] = 1;
					}
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << array[i][j] << " ";
			}
			cout << endl;
		}
		for (int i = 0; i < n; i++)
		{
			delete[] array[i];
		}
		delete[] visited;
		cout << endl;
	}
	void BiconnectedComponents()
	{

	}
	void InserEdge(int u, int v, int lengh)
	{
		Matrices[u][v] = lengh;
		Matrices[v][u] = lengh;
	}
	void PrimAlgorithm()
	{
		cout << "PrimAlgorithm=> ";
		visited = new bool[n];
		for (int i = 0; i < n; i++)
		{
			visited[i] = false;
		}
		int min=999,a=0,b=0;
		for (int i = 0; i < n; i++)
		{
			for (int j=0; j < n; j++)
			{
				if (min > Matrices[i][j]&& Matrices[i][j]!=0)
				{
					min = Matrices[i][j];
					a = i;
					b = j;
				}
			}
		}
		visited[a] = true;
		visited[b] = true;
		cout << "visited " << a << " ";
		cout << "visited " << b << " ";
		for (int i = 0; i < n; i++)
		{
			while (visited[i] == false)
			{
				min = 999;
				int x = 0, y = 0, ii;
				for (ii = 0; ii < n; ii++)
				{
					if (min > Matrices[a][ii] && Matrices[a][ii] != 0&& visited[ii] == false)
					{
						min = Matrices[a][ii];
						x = a;
						y = ii;
					}
				}
				for (ii = 0; ii < n; ii++)
				{
					if (min > Matrices[b][ii] && Matrices[b][ii] != 0 && visited[ii] == false)
					{
						min = Matrices[b][ii];
						x = b;
						y = ii;
					}
				}
				if (x == a)
				{
					a = y;
					visited[y] = true;
					cout << "visited " << y << " ";
				}
				else
				{
					b = y;
					visited[y] = true;
					cout << "visited " << y<<" ";
				}
			}
		}
		delete[] visited;
	}
private:
	int n=0;//頂點個數
	int e=0;//邊個數
	bool* visited;//DFS用
	bool flag = false;//判斷用
	int** Matrices;

};


int main()
{
	Graph g;
	cout << "dele測試"<<endl;
	g.InserVertex();
	g.InserVertex();
	g.InserVertex();
	g.InserEdge(0, 1);
	g.CheckMatrices();
	cout << endl << "-(1,0)" << endl;
	g.DeleteEdge(1,0);
	g.CheckMatrices();
	cout << "delv測試" << endl;
	g.InserEdge(0, 1);
	g.CheckMatrices();
	cout << endl << "-V1" << endl;
	g.DeleteVertex(1);
	g.CheckMatrices();
	cout << "5點圖測試"<<endl;
	g.InserVertex();
	g.InserVertex();
	g.InserVertex();
	g.InserEdge(0, 1);
	g.InserEdge(0, 3);
	g.InserEdge(1, 4);
	g.InserEdge(3, 4);
	g.InserEdge(4, 2);
	g.CheckMatrices();
	g.DFS(0);
	g.BFS(0);
	g.SpanningTreeBFS(0);
	g.InserVertex();
	g.InserVertex();
	g.InserEdge(5, 6);
	g.componets();
	cout << endl << "邊有值圖測試" << endl;
	g.InserVertex();
	g.DeleteEdge(0, 1);
	g.DeleteEdge(0, 3);
	g.DeleteEdge(1, 4);
	g.DeleteEdge(3, 4);
	g.DeleteEdge(4, 2);
	g.DeleteVertex(6);
	g.InserEdge(0, 5, 10);
	g.InserEdge(0, 1, 28);
	g.InserEdge(1, 2, 16);
	g.InserEdge(1, 6, 14);
	g.InserEdge(2, 3, 12);
	g.InserEdge(3, 6, 18);
	g.InserEdge(3, 4, 22);
	g.InserEdge(4, 5, 25);
	g.InserEdge(4, 6, 24);
	g.CheckMatrices();
	g.PrimAlgorithm();

}