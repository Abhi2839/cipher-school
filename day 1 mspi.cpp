using namespace std;
#include "bits/stdc++.h"


int main()
{
	int a;
	cin>>a;
	vector<int>arr(a);
	for (int i=0; a>i; i++)
		cin>>arr[i];
	sort(arr.begin(),arr.end());
	cout<<"Minimum element: "<<arr[0]<<endl;
	cout<<"Maximum element: "<<arr[a-1]<<endl;
	return 0;
}