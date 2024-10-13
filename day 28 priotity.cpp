using namespace std;
#include"bits/stdc++.h"
// #include <iostream>

class heap {
public:
	int arr[100];// say
	int size; //starts from 1 as 0 index there won't parent node
	heap() { // for init size
		arr[0]=-1; //not necesry
		size=0;

	}
	void insert(int val)// val to be insert
	{
		size+=1;
		int index=size;// actual;
		arr[index]=val;
		while(index>1) {
			int parent =index/2;  // for checking if it greater than index node
			if (arr[parent]<arr[index]) {
				swap(arr[index],arr[parent]);
			}
			else {
				return;
			}
		}
	}

	void print() {
		for (int i=1; size>=i; i++) {
			cout<<arr[i]<<" ";
		}
	}

	void deletefromheap() {
		if (size==0) {
			cout<<"Nothing to delete ";
			return;
		}
		arr[1]=arr[size];  // to delete parent node
		size--;
		int i=1;//starts from 1;

		while(size>i) {
			int leftnode=2*i;

			int rightnode=2*i+1;
			if (leftnode<size and arr[leftnode]>arr[i]) {
				swap(arr[i],arr[leftnode]);
				i=leftnode;
			}

			else if (rightnode<size and arr[rightnode]>arr[i]) {
				swap(arr[i],arr[rightnode]);
				i=rightnode;
			}
			else {
				return;
			}

		}
	}
};
int main()
{
	heap hp;
	hp.insert(50);
	hp.insert(51);
	hp.insert(49);
	hp.insert(10);
	hp.insert(9);
	hp.print();
	hp.deletefromheap();
	cout<<endl;
	hp.print();
	return 0;
}