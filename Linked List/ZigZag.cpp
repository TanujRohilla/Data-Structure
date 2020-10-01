#include <bits/stdc++.h>
using namespace std;
struct Node
{
int data;
Node* next;
};
Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
void print(Node *root)
{
	Node *temp = root;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
 
Node *zigZack(Node* head)
{
    if(head==NULL)
        return NULL;
    int a=0;
    Node *temp=head;
    while(temp->next!=NULL){
        if(a==0 && (temp->data > temp->next->data)){
            int d=temp->data;
            temp->data= temp->next->data;
            temp->next->data=d;
        }
        if(a==1 && (temp->data < temp->next->data)){
            int d=temp->data;
            temp->data= temp->next->data;
            temp->next->data=d;
        }
        if(a==1)
            a=0;
        else
            a=1;
        temp=temp->next;
    }
    return head;
}

int main() {
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		
		// initializing head ptr to NULL
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=newNode(data);
			else
			{
				temp->next = newNode(data);
				temp=temp->next;
			}
		}
		Node *ans = zigZack(head);
		print(ans);
		cout<<endl;
	}
	return 0;
}

