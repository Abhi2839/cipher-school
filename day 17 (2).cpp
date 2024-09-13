using namespace std;
#include <iostream>

int main()
{

	int a,b,sum=0;
	cin>>a>>b;
	int arr[a][b];
	for (int i=0; a>i; i++) {
		for (int j=0; b>j; j++) {
			cin>>arr[i][j];
			sum+=arr[i][j];
		}
	}
	cout<<sum;
	return 0;
}