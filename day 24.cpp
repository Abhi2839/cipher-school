using namespace std;
#include <iostream>

int main()
{
	int a;
	cin>>a;
	int arr[a];
	for (int i=0; a>i; i++)
		cin>>arr[i];
	int cnt=0,mxcnt=0;
	for (int i=0; a>i; i++) {
		if (arr[i]==1) {
			cnt++;
			if (mxcnt<cnt) {
				mxcnt=cnt;
			}
		}
		else {
			cnt=0;
		}
	}
	cout<<mxcnt;

}