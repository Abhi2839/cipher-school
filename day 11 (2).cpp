using namespace std;
#include <iostream>
bool search(int arr[],int target,int size=5){
    bool ans=false;
    for (int i=0;size>i;i++){
        if (arr[i]==target)
        ans=true;
    }
    return ans;
}
int main()
{

int arr[]={2,4,6,7,8};
int target=6;
if(search(arr,target)){
    cout<<"Yes";
}
else
cout<<"No";
    return 0;
}