#include "bits/stdc++.h"
using namespace std;

class Node {
public:
	int val;
	Node* next;
	Node(int data) {
		val = data;
		next = NULL;
	}
};
void insertion_at_head(Node*& head, int val) {
	Node* new_node = new Node(val);
	new_node->next = head;
	head = new_node;
}
vector<int> reorder_even(Node* head) {
	vector<int> ans;
	int index = 0;
	while (head) {
		if (index % 2 == 0) {
			ans.push_back(head->val);
		}
		head = head->next;
		index++;
	}
	return ans;
}
vector<int> reorder_odd(Node* head) {
	vector<int> ans;
	int index = 0;
	while (head) {
		if (index % 2 != 0) {
			ans.push_back(head->val);
		}
		head = head->next;
		index++;
	}
	return ans;
}

void display(Node* head) {
	Node* temp = head;
	while (temp) {
		cout << temp->val << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main() {
	Node* head = NULL;

	insertion_at_head(head, 5);
	insertion_at_head(head, 4);
	insertion_at_head(head, 3);
	insertion_at_head(head, 2);
	insertion_at_head(head, 1);

	display(head);

	vector<int> even_nodes = reorder_even(head);
	vector<int> odd_nodes = reorder_odd(head);

	for (auto itr : even_nodes) {
		cout << itr << " ";
	}
	for (auto itr : odd_nodes) {
		cout << itr << " ";
	}
	cout << endl;

	return 0;
}
