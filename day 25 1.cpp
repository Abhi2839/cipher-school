#include <iostream>
#include <climits>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int data) {
        this->val = data;
        this->next = NULL;
    }
};

class stacks {
    Node *head;
    int capacity;
    int current_size;

public:
    stacks(int c) {
        this->capacity = c;
        this->current_size = 0;
        head = NULL;
    }

    // to check whether stack is empty
    bool is_empty() {
        return this->head == NULL;
    }

    bool is_full() {
        return this->current_size == this->capacity;
    }

    void push(int val) {
        if (this->current_size == this->capacity) {
            cout << "Overflow" << endl;
            return;
        }
        // same code as in linked list in insertion_at_head
        Node *new_node = new Node(val);
        new_node->next = this->head;
        this->head = new_node;
        // now inc the current_size
        this->current_size++;
    }

    int pop() {
        if (this->head == NULL) {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        Node *new_head = this->head->next;
        this->head->next = NULL;
        Node *tobedelete = this->head;
        int result = tobedelete->val;
        delete tobedelete;
        this->head = new_head;
        this->current_size--;
        return result;
    }

    int size() {
        return this->current_size;
    }

    int get_top() {
        if (this->head == NULL) {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        return this->head->val;
    }
};

int main() {
    stacks st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    // st.pop();
    cout << st.get_top() << " ";
    // cout<<st.pop()<<" ";
    cout << st.is_empty() << " ";
    cout << st.is_full() << " ";
    st.push(6);
    st.push(7);
    return 0;
}
