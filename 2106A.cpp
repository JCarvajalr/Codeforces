// A. Dr. TC
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
 
using namespace std;
void solve() {
    int n, temp, ones = 0, i;
    string s;
    cin >> n >> s;
    
    _for(n) {
        if (s[i] == '1') {
            ones++;
        }
    }
    temp = n - ones;
    cout << ((ones * (n-1)) + temp) << "\n";
}
 
int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}