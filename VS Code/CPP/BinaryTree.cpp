#include <iostream>

using namespace std;

struct Node 
{
    int key;
    Node *left;
    Node *right;
};

Node *Creat_Node (int data)
{
    Node *p= new Node;
    p->key= data;
    p->left= NULL;
    p->right= NULL;
    return p;
}



int main ()
{
    int data;
    cin >> data;
    Creat_Node (data);
    return 0;
}
