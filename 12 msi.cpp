using namespace std;
#include <iostream>
#include"bits/stdc++.h"
int main()
{
	string s="anagram", t = "nagaram",r="rat",q="car";
	sort(s.begin(),s.end());
	sort(t.begin(),t.end());
	if (s==t)
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
	if (r==q)
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
	return 0;
}