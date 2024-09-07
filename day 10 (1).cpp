using namespace std;
#include "bits/stdc++.h"
int maximum(vector<int>&a){
    sort(a.begin(),a.end());
    return a[a.size()-1];
}

int main() {
    vector<int>a={1, 5, 3, 9, 2};
    cout<<maximum(a);
}
