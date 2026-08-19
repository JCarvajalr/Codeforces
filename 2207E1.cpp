// E1. N-MEX (Constructive Version)
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
using namespace std;

void solve() {
    int n, i;
    cin >> n;
    vector<ll> ar(n);
    vector<bool> sp(n+1, 0);
    _for(n) {
        cin >> ar[i];
    }
    for (i = 0; i < n; i++) {
        if (ar[i] < n-i-1 || ar[i] > n || (i > 0 && ar[i] > ar[i-1])) { 
            cout << "NO" << endl; return;
        }
        sp[ar[i]] = 1;
    }

    ll last = n;
    int fr = n;
    cout << "YES\n";
    for (i = 0; i < n; i++) {
        if (ar[i] != last) {
            cout << (n+1) << " ";
        }
        else {
            fr--;
            while (fr >= 0 && sp[fr]) fr--;
            cout << fr << " ";
        }
        last = ar[i];
    }
    cout << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}