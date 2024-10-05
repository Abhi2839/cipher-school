using namespace std;
#include <iostream>
#include<climits>
class stacks {
    int capacity;
    int *arr;
    int top;
    // all these prop are private by default
    public:
    stacks(int c){
        this->capacity=c;
        arr=new int[c];// size of array;  dynamic memory allocation
        this->top=-1; 
    }
    
    void push(int data){
        if (this->top==this->capacity-1){
            cout<<"Overflow: "<<endl;
            return ;
        }
        this->top++;
        this->arr[this->top]=data;
    }
    int  pop(){
        if (this->top==-1){
            cout<<"Underflow" <<endl;
            return INT_MIN;
        }
        return this->arr[this->top--];
    }
    int top1(){
         if (this->top==-1){
            cout<<"Underflow" <<endl;
            return INT_MIN;
        }
        return this->arr[this->top];
    }
    
    bool isempty(){
        return this->top==-1;
            
        }
    int size(){
        return this->top+1;
    }
    bool isfull(){
        return this->top==this->capacity-1;
    }
};
int main()
{
   stacks st(5);
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.push(5);
//   st.pop();
cout<<st.top1()<<" ";
// cout<<st.pop()<<" ";
cout<<st.isempty()<<" ";
cout<<st.isfull()<<" ";
st.push(6);
st.push(7);

    return 0;
}