// A. Mark the Photographer
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
 
using namespace std;
void solve() {
    int n, x, i;
    bool ans = true;
    cin >> n  >> x;
    vector<ll> heights(n*2);
    for (i = 0; i < (n*2); i++) cin >> heights[i];
    
    sort(heights.begin(), heights.end());
    
    for (i = 0; ans && (i < n); i++) {
        ans = (heights[n + i] - heights[i] >= x);
    }
    cout << ((ans) ? "YES\n" : "NO\n");
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    
    return 0;
}