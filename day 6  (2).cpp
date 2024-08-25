using namespace std;
#include <iostream>

int main()
{
int a;
 cin>>a;
  int arr[a];
  int sum=0;
   for (int i=0;a>i;i++){
       cin>>arr[i];
       sum+=arr[i];
   }
   cout<<"Sum of all array element is "<<sum;
    return 0;
}