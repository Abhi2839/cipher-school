using namespace std;
#include "bits/stdc++.h"

int main()
{
	string s="Hello, World!";
	char c='l';
	int cnt=0;
	for (int i=0; s[i]!='\0'; i++) {
		if (s[i]=='l')
			cnt++;
	}

	cout<<cnt;
	return 0;
}