using namespace std;

#include <iostream>
int main()
{
	int a;
	cin>>a;
	int fact=1;
	for (int i=2; a>=i; i++) {
		fact*=i;
	}
	cout<<"Factorial of "<<a<<" is "<<fact;
	return 0;
}