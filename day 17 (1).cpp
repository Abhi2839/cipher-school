using namespace std;
#include <iostream>

int main()
{

	int a,b,key;
	bool ans=false;
	cin>>a>>b>>key;
	int arr[a][b];
	for (int i=0; a>i; i++) {
		for (int j=0; b>j; j++) {
			cin>>arr[i][j];

		}
	}
for (int i=0; a>i; i++) {
		for (int j=0; b>j; j++) {
		if(arr[i][j]==key){
		ans=true;
break;
		}
		    
		}
	}
	if (ans){
	    cout<<"Yes";
	}
	else{
	    cout<<"No";
	}
	return 0;
}