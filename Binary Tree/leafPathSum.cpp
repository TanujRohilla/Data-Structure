#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data)
{
  struct Node* node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}

long long treePathsSumUtil(Node* root, int val){
    long long l,r;
    if(root==NULL)
        return 0;
    val=val*10 + root->data;
    if(root->left==NULL && root->right==NULL)
        return val;
    l= treePathsSumUtil(root->left,val);
    r= treePathsSumUtil(root->right,val);
    return l+r;
}
long long treePathsSum(Node *root)
{   
    return treePathsSumUtil(root,0);
}

int main()
{
  int t;
  scanf("%d
", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     cout << treePathsSum(root) << endl;
  }
  return 0;
}



