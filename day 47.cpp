using namespace std;
#include "bits/stdc++.h"

int main()
{
	int a;
	cin>>a;
	vector<int>v;
	for (int i=0; a>i; i++) {
		int b;
		cin>>b;
		v.push_back(b);
	}
	int k;
	cin>>k;
	reverse(v.begin(),v.end());
	reverse(v.begin(),v.begin()+k);
	reverse(v.begin()+k,v.end());
	for (int i=0; a>i; i++) {
		cout<<v[i]<<" ";
	}

	return 0;
}