using namespace std;
#include <iostream>

int main()
{
	int a,ans;
	cin>>a;
	int arr[a];
	int arr1[100]= {0};
	for (int i=0; a>i; i++) {
		cin>>arr[i];
	}
	for (int i=0; a>i; i++) {
		arr1[arr[i]]++;
	}

	for (int i=0; a>i; i++)
	{
		if (arr1[arr[i]]==1)
			ans=arr[i];
	}

	cout<<ans;
	return 0;
}