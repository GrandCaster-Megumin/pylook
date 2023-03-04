#include<iostream>
using namespace std;
class tree;
class treenode
{
    friend class tree;
public:
    treenode* left;
    treenode* right;
    int data;
    treenode(int d)
    {
        left = 0;
        right = 0;
        data = d;
    };
};
class tree
{
public:
    treenode* root;
    tree()
    {
        root = 0;
    }
    void insert(int d)
    {
        if (!root)
        {
            root = new treenode(d);
        }
        else
        {
            treenode* now = root;
            treenode* before = now;
            while (now)
            {
                before = now;
                if (d > now->data)
                {
                    now = now->right;
                }
                else
                {
                    now = now->left;
                }
            }
            if (d > before->data)
            {
                before->right = new  treenode(d);
            }
            else
            {
                before->left = new  treenode(d);
            }
        }
    }
    void postorder(treenode* now, int root)
    {
        if (now)
        {
            postorder(now->left, root);
            postorder(now->right, root);
            if (now->data == root)
            {
                cout << now->data << endl;
            }
            else
            {
                cout << now->data << " ";
            }
        }
    }
    void preorder(treenode * now, int root)
    {
        if (now)
        {
            if (now->data == root)
            {
               cout << now->data << " ";
            }
            else
            {
                cout << now->data << " ";
            }
            preorder(now->left, root);
            preorder(now->right, root);
        }
    }
    void inorder(treenode* now, int root)
    {
        if (now)
        {
            inorder(now->left, root);
            if (now->data == root)
            {
                cout << now->data << " ";
            }
            else
            {
                cout << now->data << " ";
            }
            inorder(now->right, root);
        }
    }
};
int main()
{
    int a;
    tree t;
    char c;
    while (cin >> a)
    {
        t.insert(a);
        if (cin.peek() == '\n')
        {
            cout << "postorder =";
            t.postorder(t.root, t.root->data);
            cout << "preorder =";
            t.preorder(t.root, t.root->data);
            cout <<endl<< "inorder =";
            t.inorder(t.root, t.root->data);
            t.root = 0;
        }
    }
    return 0;
}