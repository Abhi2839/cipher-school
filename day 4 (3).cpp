using namespace std;

#include <iostream>

struct complex_num{
    int x;
    int y;
};
int main()
{
   

struct complex_num c1={10,20};
struct complex_num c2={20,12};
struct complex_num c1_c2={(c1.x+c2.x),(c2.y+c2.x)};
struct complex_num c1_c2_diff={(c1.x-c2.x),(c1.y-c2.y)};
    cout<<c1_c2.x <<" "<<c1_c2.y <<" i "<<endl;
    
     cout<<c1_c2_diff.x <<" "<<c1_c2_diff.y <<" i "<<endl;
    return 0;
}