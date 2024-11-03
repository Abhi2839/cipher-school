using namespace std;
#include "bits/stdc++.h"


int main()
{
	int a,b;

	cin>>a;
	b=a;
	vector<int>v;
	while(a--) {
		int c;
		cin>>c;
		v.push_back(c);
	}
	int key;
	cin>>key;
	bool ans=false;
	for (int i=0; b>i; i++) {
		for (int j=i+1; b>j; j++) {
			if (v[i]+v[j]==key)
				ans=true;
		}
	}
	if (ans)
		cout<<"Yes";
	else cout<<"NO";
	return 0;
}