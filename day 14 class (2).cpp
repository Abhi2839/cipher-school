using namespace std;
#include <iostream>
class car {
public:
	//  brand name , model, engine, number of seats and method disp
	string brand_name,engine_num;
	int model,num_of_seats;
	void display(string a,string b,int c,int d) {
		brand_name=a;
		engine_num=b;
		model=c;
		num_of_seats=d;
		cout<<"Brand name:"<<brand_name<<endl;
		cout<<"Engine number: "<<engine_num<<endl;
		cout<<"model: "<<model<<endl;
		cout<<"NUmber of seats: "<<num_of_seats<<endl;
	}
};

int main()
{
	string e,f;
	getline(cin,e);
	getline(cin,f);
	int g,h;
	cin>>g>>h;
	car c;
	c.display(e,f,g,h);

	return 0;
}