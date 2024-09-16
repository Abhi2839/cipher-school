using namespace std;
#include <iostream>
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
	Node *new_node=new Node(val);
	new_node->next=head;
	head=new_node;
}
void delete_by_val(Node *&head,int val1) {
	while(head!=NULL and head->val==val1) {
		Node *temp=head;
		head=head->next;
		delete temp;
	}
	Node *temp=head;
	while(temp!=nullptr and temp->next!=nullptr) {
		if(temp->next->val==val1) {

			Node *to_de=temp->next;
			temp->next=temp->next->next;
			delete(to_de);

		}

		else
			temp=temp->next;

	}
}
void display(Node*head) {
	Node *temp=head;
	while(temp) {
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	Node *head=NULL;
	insertion_at_head(head,5);
	insertion_at_head(head,4);
	insertion_at_head(head,4);
	insertion_at_head(head,3);
	insertion_at_head(head,8);
	insertion_at_head(head,1);
	display(head);
	delete_by_val(head,4);
	display(head);

	return 0;
}