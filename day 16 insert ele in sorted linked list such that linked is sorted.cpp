#include "bits/stdc++.h"
using namespace std;
class Node {
public:
	int val;
	Node*next;
	Node(int data) {
		val=data;
		next=NULL;
	}
};
void insertion_at_head(Node*&head,int val) {
	Node*new_node=new Node(val);
	new_node->next=head;
	head=new_node;
}
void insertion_at_element_in_a_sorted(Node*&head,int ele) {
	//base condition
	if (head==NULL || head->val>=ele) {
		Node*new_node=new Node(ele);
		new_node->next=head;
		head=new_node;
		return;
	}
	Node*temp=head;
	Node*new_node=new Node(ele);//add ele
	// to insert at appropritate pos
	while(temp->next!=NULL and temp->next->val<ele) { //till ele is greater
		temp=temp->next;
	}
	new_node->next=temp->next;
	temp->next=new_node;
}
void display(Node*head) {
	Node*temp=head;
	while(temp) {
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	Node*head=NULL;
	insertion_at_head(head,51);
	insertion_at_head(head,4);
	insertion_at_head(head,2);
	insertion_at_head(head,1);
	display(head);
	insertion_at_element_in_a_sorted(head,31);
	display(head);

	return 0;
}