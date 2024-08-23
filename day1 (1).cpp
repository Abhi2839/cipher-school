using namespace std;
#include <iostream>

int main()
{
	int a,sum=0,c;  // i/p for 5grade
	cin>>a;
	c=a;
	while(a--) {
		int b;
		cin>>b;
		cout<<"Enter the grade "<<b<<endl;
		sum+=b;
	}
	cout<<"average of grade: "<<float(sum/c);
	return 0;
}