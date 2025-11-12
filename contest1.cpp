#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    string s;
    cin >> s;

    int n;
    cin >> n;

    bool ache = false;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if (s.find(word) != string::npos) {
            ache = true;
            break;
        }
    }
    if (ache)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
