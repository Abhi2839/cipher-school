using namespace std;
#include <iostream>

int main()
{
int a;
 cin>>a;
  int arr[a];
  int osum=0,sum=0;
  int esum=0;
   for (int i=0;a>i;i++){
       cin>>arr[i];
      sum+=arr[i];
   }
   cout<<"Sum of all array element is "<<sum<<endl;
   for (int i=0;a>i;i++){
       if (arr[i]%2==0)
       esum+=arr[i];
       else
       osum+=arr[i];
   }
   
   
    cout<<"Sum of all even  element is "<<esum<<endl;
     cout<<"Sum of all odd element is "<<osum<<endl;
    
   
    return 0;
}