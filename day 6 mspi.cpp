using namespace std;
#include "bits/stdc++.h"
int main()
{
	int a,b;
	cin>>a;
	b=a;
	vector<int>v;
	while(a--) {
		int b;
		cin>>b;
		v.push_back(b);
	}
	int c=0,d=b-1;
	while(d>c) {
		swap(v[c],v[d]);
		d--;
		c++;
	}
	for (auto ax:v)
		cout<<ax<<" ";
	return 0;
}