#include"bits/stdc++.h"
using namespace std;
int main()
{
	stack<int>s;
	int n;
	cin>>n;
	while(n--) {
		int b;
		cin>>b;
		s.push(b);
	}
	while(!s.empty()) {
		cout<<s.top()<<" ";
		s.pop();
	}
}