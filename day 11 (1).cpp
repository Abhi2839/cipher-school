using namespace std;
#include <iostream>
int search(int arr[],int target,int size=5){
    int ans=-1;
    for (int i=0;size>i;i++){
        if (arr[i]==target)
        ans=i;
    }
    return ans+1;
}
int main()
{

int arr[]={2,4,6,7,8};
int target=6;
cout<<search(arr,target);
    return 0;
}