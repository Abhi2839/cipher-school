using namespace std;
#include <iostream>

int main()
{
	int a;
	cin>>a;
	int arr[a];
	for (int i=0; a>i; i++) {
		cin>>arr[i];
	}
	for (int i=0; a>i; i++) {
		cout<<*(arr+i)<<" ";
	}

	return 0;
}