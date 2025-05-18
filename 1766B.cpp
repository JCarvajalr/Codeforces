// B. Notepad#
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
 
using namespace std;
void solve() {
    int n, i;
    string str;
    cin >> n;
    cin >> str;
    for (int a = 0; a < n-2; a++) {
        for (int b = a+2; b < n-1; b++) {
            if (str[a] == str[b] && str[a+1] == str[b+1]) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--){
        solve();
    }
    return 0;
}