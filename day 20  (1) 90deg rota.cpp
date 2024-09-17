  #include "bits/stdc++.h"
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<vector<int>> arr(a, vector<int>(b)); 
 vector<vector<int>> arr1(b, vector<int>(a));//for transpose

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }
for (int i=0;b>i;i++){
    for (int j=0;a>j;j++){
        arr1[i][j]=arr[j][i];
    }
}//transpose
    for (int i = 0; i < a; i++) {
        reverse(arr1[i].begin(), arr1[i].end());
    }//rotating
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
