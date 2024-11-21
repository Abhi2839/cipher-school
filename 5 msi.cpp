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
	sort(v.begin(),v.end());
	cout<<v[v.size()-k];
	return 0;
}
