#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    getline(cin, name);

    int cnt = 0;  // Count of non-vowel 
    int cnt1 = 0; // Count of vowel 

    for (int i = 0; name[i] != '\0'; i++) {
        char c = name[i];
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
            cnt1++;
        } else {
            cnt++;
        }
    }

    cout << cnt << " " << cnt1 << endl;

    return 0;
}
