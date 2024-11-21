using namespace std;
#include "bits/stdc++.h"

int main()
{
	int a;
	cin>>a;
	vector<int>v;
	int ans=-1;
	int key=7;
	for (int i=0; a>i; i++) {
		int b;
		cin>>b;
		v.push_back(b);
	}
	for (int i=0; a>i; i++) {
		if (v[i]==key) {
			ans=i;
			break;
		}
	}
	cout<<ans;
	return 0;
}