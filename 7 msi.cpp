using namespace std;
#include <iostream>

int main()
{
	int arr[9]= {-2,1,-3,4,-1,2,1,-5,4};
	int sum=arr[0];
	for (int i=0; 9>i; i++) {
		int res=0;
		for (int j=i+1; 9>j; j++) {
			res+=arr[j];
			sum=max(sum,res);
		}
	}
	cout<<sum;
	return 0;
}