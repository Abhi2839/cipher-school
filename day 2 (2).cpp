using namespace std;
#include <iostream>

int main()
{
	int a,b,c;  
	cin>>a>>b>>c;
	if (a>b and a>c)
		cout<<a <<" is greater than "<< b <<" and "<<c;
	else if (a<b and c<b)
		cout<<b <<" is greater than "<< a <<" and "<<c;
	else

		cout<<c <<" is greater than "<< b <<" and "<<a;
	return 0;
}