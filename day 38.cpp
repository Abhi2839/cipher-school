using namespace std;
#include <iostream>
class shape {
public:
	void area() {

	}
	void perimeter() {

	}
};

class rectangle:public shape {
private:
	int len;
	int brea;
public:
	void   area() {
		this->len=10;
		this->brea=20;
		cout<<"Area of rectangle: "<<len*brea<<endl;
	}

	void perimeter() {
		this->len=10;
		this->brea=20;
		cout<<"Area of rectangle: "<<2*(len+brea)<<endl;
	}
};
class circle:public shape {
private:
	int rad;

public:
	void   area() {
		this->rad=10;
		;
		cout<<"Area of circle: "<<3.14*rad*rad<<endl;
	}

	void perimeter() {
		this->rad=10;

		cout<<"Area of circle: "<<2*(3.14*rad)<<endl;
	}
};
int main()
{
	rectangle r;
	r.area();
	circle c;
	c.perimeter();
	return 0;
}