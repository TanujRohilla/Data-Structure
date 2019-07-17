// C++ program for printing Bottom View of a given binary tree 
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


void printBottomView(Node* root) {
    if(root==NULL)
        return; 
    int d=0;
    map<int,int> m;
	queue< pair< Node*, int> > q;
    q.push(make_pair(root,d));

    while(!q.empty()){
        pair<Node *,int> temp=q.front();
        q.pop();
        m[temp.second]=temp.first->key;

        if(temp.first->left!=NULL){
            q.push(make_pair(temp.first->left,temp.second-1));
        }
        if(temp.first->right!=NULL){
            q.push(make_pair(temp.first->right,temp.second+1));
        }
    }

    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->second<<" ";
    }

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
	printBottomView(root); 
	return 0; 
} 
