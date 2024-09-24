using namespace std;
#include <iostream>
class Rectangle {
public:
	int length,breadth;
	void display(int c,int d) {
		length=c;
		breadth=d;
		cout<<"Area of Rectangle: "<<length*breadth;
	}
};

int main()
{

	int g,h;
	cin>>g>>h;
	Rectangle rect;
	rect.display(g,h);

	return 0;
}