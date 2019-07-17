// C++ program for printing Top View of a given binary tree 
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

void printTopView(Node* root) { 
	if(root==NULL)
        return; 
    int d=0;
    map<int,int> m;
	queue< pair< Node*, int> > q;
    q.push(make_pair(root,d));

    while(!q.empty()){
        pair<Node *,int> temp=q.front();
        q.pop();
        if(m.count(temp.second)==0)
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
	Node* root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->right = newNode(4); 
    root->left->right->right = newNode(5); 
    root->left->right->right->right = newNode(6);  
	//cout << "Vertical order traversal is n"; 
	printTopView(root); 
	return 0; 
} 
