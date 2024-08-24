using namespace std;

#include <iostream>

int main()
{
	int a,sum;
	cin>>a;
	for (int i=1; a>=i; i++) {
		sum+=i;
	}
	cout<<"Sum of first "<<a<<" number is "<<sum;
	return 0;
}