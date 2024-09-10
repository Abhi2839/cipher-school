/* Online C++ Compiler and Editor */
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node*next;
    Node(int data)
    {
        val=data;
        next=NULL;
    }
};
void insertion_at_head(Node* &head,int val)
{
    Node*new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}
void display(Node*head)
{
    Node*temp=head;
    while(temp!=NULL) {
        cout<<temp->val<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
void insertion_at_tail(Node *&head,int val)
{
    Node*new_node=new Node(val);
    Node *temp=head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next=new_node;
}


int main()
{
    Node *head=NULL;
    int a;
    cin>>a;
    while(a--){
     
    int element ;
    cin>>element;
    insertion_at_head(head,element);
    display(head);}
    // insertion_at_head(head,element);
    // display(head);
    insertion_at_tail(head,50);
        
    
    display(head);
  
    return 0;
}