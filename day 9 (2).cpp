using namespace std;
#include <iostream>

int main()
{
	int a=10;
	int *ptr=&a;
	int **ptr1=&ptr;
	cout<<a<<" "<<*ptr<<" "<<**ptr1;
	return 0;
}