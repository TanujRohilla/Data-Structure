#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

int getNthFromLast(Node *head, int n)
{
       Node *temp=head;
       while(n>1){
           temp=temp->next;
           if(temp==NULL)
            return -1;
            n--;
       }
       Node *temp2=head;
       while(temp->next!=NULL){
           temp=temp->next;
           temp2=temp2->next;
       }
       return temp2->data;
}

int main()
{
  int T,i,n,l,k;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
    printf("%d", getNthFromLast(head, k));
    cout << endl;
    }
    return 0;
}
