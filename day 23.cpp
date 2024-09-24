using namespace std;
#include <iostream>
int main()
{
int a,key;
	cin>>a;
	int arr[a];
	for (int i=0; a>i; i++) {
		cin>>arr[i];
	}
	cin>>key;
	bool ans=false;

	for (int i=0; a>i; i++) {
		for(int j=i+1; a>j; j++) {
			if (arr[i]+arr[j]==key) {
				ans=true;
				break;
			}
		}
	}
	if (ans)
		cout<<"Yes";
	else
		cout<<"NO";
	return 0;
}