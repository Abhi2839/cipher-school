using namespace std;
#include <iostream>

class car {
public:
	string brand;
	string model;
	int year;
	int speed;
	car(int a,int b,string c,string d) {
		year=a;
		speed=b;
		brand=c;
		model=d;
	}
	void increase_speed (int x) {
		speed+=x;
		cout<<"speed inc to: "<<speed<<endl;
	}
	void descrease_speed (int y) {
		speed-=y;
		if (speed>0)
			cout<<"Speed desc to: "<<speed<<endl;
		else cout<<"Speed can'nt be negative"<<endl;
	}
};
int main()
{
	car c(2015,150,"maruti","swift");
	cout<<c.speed<<endl;
	cout<<c.year<<endl;
	cout<<c.brand<<endl;
	cout<<c.model<<endl;
	c.descrease_speed(50);
	c.increase_speed(20);


	return 0;
}