// A. Magnets
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
 
using namespace std;
void solve() {
    int n, i, t = 1;
    string a, b;
    cin >> n;
    cin >> a;
    while(--n) {
        cin >> b;
        if (a != b) {
            t++;
            a = b;
        }
    }
    cout << t;
}

int main() {
    fastread();
    int test = 1;
    while (test--){
        solve();
    }
    return 0;
}