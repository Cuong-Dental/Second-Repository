#include <iostream>

using namespace std;

struct Node 
{
    int key;
    Node *left;
    Node *right;
};

Node MinTree_find (Node node)
{
    if (node != NULL)
    {
        MinTree_find (node.left);      
    }
    return node;
}

Node MaxTree_find (Node node)
{
    if (node != NULL)
    {
        MaxTree_find (node.right);
    }
    return node;
}

Node MaxTree (Node x)
{
    if (x.right == NULL)
    {
        return x;
    }
    return MaxTree (x.right);
}

Node K_Search (Node node, int K)
{
    if (node == NULL && node.key == K)
    {
        return node;
    }
    else if (K < node.key)
        {
            K_Search (node.left, K);
        }
        else if (K > node.key)
            {
                K_Search (node.right, K);
            }
}

// vong lap
bool Search (Node x, int k)
{
    while (x != NULL)
    {
        if (x.key == k)
        {
            return true;
        }

        if (k < x.key)
        {
            x = x.left;
        }
        else 
            {
                x = x.right;
            }
    }
    return false;
}

Node Min (Node x)
{   
    while (x != NULL)
    {
        x = x.left;
    }
    return x;
}

Node Max (Node x)
{   
    
    while (x != NULL)
    {
        x = x.right;
    }
    return x;
}