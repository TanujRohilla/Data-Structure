// C++ program for printing Left View of a given binary tree 
#include <bits/stdc++.h>
using namespace std; 

struct Node { 
	int key; 
	Node *left, *right; 
}; 
 
struct Node* newNode(int key) { 
	struct Node* node = new Node; 
	node->key = key; 
	node->left = node->right = NULL; 
	return node; 
} 

void printLeftView(Node* root, int count, int* max){
    if(root==NULL)
        return;
    if(*max<count){
        cout<<root->key<<" ";
        *max=count;
    }
    printLeftView(root->left,count+1,max);
    printLeftView(root->right,count+1,max);
}

void leftView(Node* root) {
    int max=0;
    printLeftView(root,1,&max);
} 
 
int main() { 
	Node *root = newNode(20); 
    root->left = newNode(8); 
    root->right = newNode(22); 
    root->left->left = newNode(5); 
    root->left->right = newNode(3); 
    root->right->left = newNode(4); 
    root->right->right = newNode(25); 
    root->left->right->left = newNode(10); 
    root->left->right->right = newNode(14); 
	leftView(root); 
	return 0; 
} 
