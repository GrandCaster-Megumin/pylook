#include<iostream>
#include <stack>
using namespace std;
class huff;
class htree
{
    friend class tree;
public:
    htree() {
        left = 0;
        right = 0;
        father = 0;
        c = 0;
        b = 0;
        w = 0;
    };
    htree* left; //左分支
    htree* right; //右分之
	char c;	 //自己的字元
	int w; //出現次數
    int b; //0或1的編碼
    htree* father;//父節點
void huff()
{
}
private:
};
class huff
{
public:
    htree* root;
    int num;
    huff()
    {
        root = 0;
        //  MyClass* myArray = new MyClass[5] { MyClass(1), MyClass(2), MyClass(3), MyClass(4), MyClass(5) };
    }
    void insert(int numm, char* c, int* w)//num為要放入的各樹
    {
        num = numm;
        if (!root)
        {
            root = new htree[num];
            for (int i = 0; i < num; i++)
            {
                root[i].c = c[i];
                root[i].w = w[i];
            }
        }
    }
    void Huffman()
    {
        htree* min1, * min2;//[權重,節點編號]

        //min1->w = 0;//做int 最大值比較優
        //min2->w = 0;
        while (1)
        {
            min1 = new htree();
            min2 = new htree();
            min1->w = 999999;//做int 最大值比較優
            min2->w = 999999;
            for (int i = 0; i < num; i++)
            {
                htree* look = &root[i];
                while (look->father)
                {
                    look = look->father;
                }
                if (look->w < min1->w)
                {
                    min1 = look;
                    cout << "look1 " << look->w << endl;
                }
            }
            for (int i = 0; i < num; i++)
            {
                htree* look = &root[i];
                while (look->father)
                {
                    look = look->father;
                }
                if (look->w < min2->w && look != min1)
                {
                    min2 = look;
                    cout << "look2 " << look->w << endl;
                }
            }
            //cout << min1->w << "min1"<<endl;
            //斷點
            if (min2->w == 999999)
            {
                cout << "o_wa_ri ="<<min1->w;
                for (int i = 0; i < num; i++)
                {
                    htree* look = &root[i];
                    cout << look->c;
                    stack<char> outputStack;  // 用來暫存輸出的字符
                    while (look->father)
                    {
                        cout << look->b;
                        outputStack.push(look->b);
                        look = look->father;
                    }
                    // 從棧中彈出字符，實現反轉輸出
                    while (!outputStack.empty()) {
                        cout << outputStack.top();  // 輸出棧頂元素
                        outputStack.pop();          // 彈出棧頂元素
                    }
                }
                break;
            }
            else
            {
                cout << min1->w <<"  "<< min2->w << endl;

                min1->father = new htree();
                min2->father = min1->father;
                if (min1->w != 0 && min2->w != 999999)
                {
                    min1->father->w = min1->w + min2->w;
                }
               
                min1->b = 0;
                min2->b = 1;
                min1->father->left = min1;
                min2->father->right = min2;
               // min2 = min2->father;
                //while (min2->right)
               // {
                //    cout << min2->right->w << "min1->left";
                //    min2 = min2->right;
                //}
            }
            //cout << min2->w << "min2" << endl;
        }
        
    }
};


int main()
{

    huff h;
    char c[5] = { 'a', 'b', 'c', 'd', 'e' };
    int w[5] = {15,7,6,6,5};
    h.insert(5, c, w);
    h.Huffman();
    cout << "hello world";
	return 0;
}

