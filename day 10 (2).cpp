using namespace std;
#include "bits/stdc++.h"
bool isPalindrome(const string &str) {
	string s;
	for (auto &i:str) {
		if (isalnum(i)) {
			s+=tolower(i);
		}
	}
	string r=s;
	reverse(r.begin(),r.end());
	return r==s;
}

int main()
{
	cout<<isPalindrome("A man, a plan, a canal, Panama");

	return 0;
}
