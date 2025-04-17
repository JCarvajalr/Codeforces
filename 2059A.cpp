// A. Milya and Two Arrays
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
using namespace std;

void solve() {
    int n, i;
    ll temp;
    cin >> n;

    set<ll> a; set<ll> b;
    for (i = 0; i < n; i++) {
        cin >> temp;
        a.insert(temp);
    }
    for (i = 0; i < n; i++) {
        cin >> temp;
        b.insert(temp);
    }
    cout << (((a.size() + b.size()) < 4) ? "NO\n" : "YES\n");
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