using namespace std;

#include <iostream>

int fact(int a) {
	if (a==0 or a==1)
		return 1;
	return a*fact(a-1);
}
int main()
{
	cout<<fact(5);

	return 0;
}