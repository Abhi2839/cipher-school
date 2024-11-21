using namespace std;
#include "bits/stdc++.h"

int main()
{
	int a;
	cin>>a;
	vector<int>v;

	int k;
	cin>>k;
	for (int i=0; a>i; i++) {
		int b;
		cin>>b;
		v.push_back(b);
	}
	set<int>s(v.begin(),v.end());
	v.assign(s.begin(),s.end());
	sort(v.begin(),v.end());
	cout<<v[v.size()-k-1];
	return 0;
}