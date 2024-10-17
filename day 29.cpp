using namespace std;
#include <iostream>
class instrument {
public:
	void playsound() {

	}
	void display() {

	}
};
class piano:public instrument {
public:
	void playsound() {
		cout<<"Playing a melodious piano tune"<<endl;
	}
	void display() {
		cout<<"This is a Piano"<<endl;
	}
};
class Violin:public instrument {
public:
	void playsound() {
		cout<<"Playing a classical violin tune"<<endl;
	}
	void display() {
		cout<<"This is a Violin."<<endl;
	}
};
int main()
{
	piano p;
	p.playsound();

	p.display();
	Violin v;
	v.playsound();
	v.display();
	return 0;
}