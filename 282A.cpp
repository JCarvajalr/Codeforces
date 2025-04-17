#include <bits/stdc++.h>

using namespace std;
int main() {
    int test, total = 0;
    cin >> test;
    while (test--){
        string line;
        cin >> line;
        if (line[1] == '+') total++;
        else total--;
    }
    cout << total;
    return 0;
}