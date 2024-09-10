using namespace std;
#include <iostream>

class Node{
  public:
  int val;
  Node *next;
  Node(int data)   // constructor
    {
        val=data;
        next=NULL;
    }
};
void insertion_head(Node* &head,int val){
    Node* new_node=new Node(val);
    new_node->next=head; // new node pointing towardss first element
    head=new_node;
}
void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->"<<" ";  .
        temp=temp->next;
    }
    
    cout<<"NULL "<<endl;
}
int main()
{
      Node*head=NULL;
    insertion_head(head,4);

insertion_head(head,14);

insertion_head(head,44);
    display(head);


    return 0;
}

