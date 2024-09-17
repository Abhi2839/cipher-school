#include "bits/stdc++.h"
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	vector<vector<int>> arr(a, vector<int>(b));
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < a; i++) {
		sort(arr[i].begin(), arr[i].end());
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
