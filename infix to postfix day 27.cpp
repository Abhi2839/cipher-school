#include "bits/stdc++.h"
using namespace std;
int pre(char ch){
    if (ch=='*' or ch=='/')
    return 2;
     if (ch=='+' or ch=='-')
    return 1;
    if (ch=='^')
    return 3;
    return 0;
    }
    bool ifo(char ch){
        return ch=='*' or ch=='+' or ch=='/' or ch=='-' or ch=='^';    }
    
    string infix_to_postfix(string s){
        stack<int>st;
        string postfix_expression;
        
        for(char ch:s){
            if (isalnum(ch))
            postfix_expression+=ch;
        
        else if (ch=='('){
            st.push(ch);
        }
        else if (ch==')'){
            while(!st.empty() and st.top()!='('){
                postfix_expression+=st.top();
                st.pop();
            }
            st.pop();// to del )
        }
        else if (ifo(ch)){
            while(!st.empty() and pre(st.top())>=pre(ch)){
                postfix_expression+=st.top();
                st.pop();
            }
            st.push(ch); // to store less prec order one operator
        }
    }
    
    
    while(!st.empty()){
        postfix_expression+=st.top();
        st.pop();
    }
        
     return postfix_expression;   
    }
int main(){
    string s="a+b*(c^d-e)^(f+g*h)-i";
    cout<<infix_to_postfix(s);
}    
    
    
    