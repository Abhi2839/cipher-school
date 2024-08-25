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
		for(int j=0; a-1>j; j++) {
			if (arr[j]>arr[j+1]) {
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}

	}

	for (int i=0; a>i; i++) {
		cout<<arr[i]<<" ";
	}


}