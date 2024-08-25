using namespace std;
#include <iostream>

int main()
{
int a;
 cin>>a;
  int arr[a];
  int osum=0,sum=0,oe=0,ee=0;
  int esum=0;
   for (int i=0;a>i;i++){
       cin>>arr[i];
      sum+=arr[i];
   }
   cout<<"Sum of all array elements is "<<sum<<endl;
   for (int i=0;a>i;i++){
       if (arr[i]%2==0){
       esum+=arr[i];
           ee++;
       }
       else{
       osum+=arr[i];
       oe++;
   }
       
   }
   
   
    cout<<"Sum of all even  elements is "<<esum<<endl;
     cout<<"Sum of all odd elements is "<<osum<<endl;
    
    cout<<"Total number of all even  elements is "<<ee<<endl;
     cout<<"Total number of all odd elements is "<<oe<<endl;
    return 0;
}