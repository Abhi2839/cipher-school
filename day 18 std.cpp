using namespace std;
#include <iostream>
class student {
public:
	string first_name,last_name;
	int age;
	void get_details(string a,string b,int c) {
		first_name=a;
		last_name=b;
		age=c;
		cout<<"Full name:"<<first_name+" "+last_name<<endl;
		cout<<"Age: "<<age<<endl;
	}
};

int main()
{
	string e,f;
	cin>>e>>f;
	int g;
	cin>>g;
	student c;
	c.get_details(e,f,g);

	return 0;
}