using namespace std;
#include <iostream>
#include<algorithm>
int main()
{
    // std::cout<<"Hello World";
string name;
getline(cin,name);
reverse(name.begin(),name.end());
cout<<name;
    return 0;
}