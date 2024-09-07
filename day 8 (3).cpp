using namespace std;
#include "bits/stdc++.h"

int main()
{
	string s="Hello, World!";
	int cnt=0;
	for (int i=0; s[i]!='\0'; i++) {
		cnt++;
	}

	cout<<cnt;
	return 0;
}