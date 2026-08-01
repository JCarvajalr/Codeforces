// B. Another Sorting Problem
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define _for(n) for (i = 0; i < n; i++)
using namespace std;

void solve() {
    int n, i;

    cin >> n;
    vector<int> arr(n);
    _for(n) cin >> arr[i];
    int dif = 0;
    
    _for(n-1) dif = max(dif, arr[i] - arr[i+1]);
    for (i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) arr[i] += dif;
    }

    if (is_sorted(arr.begin(), arr.end())) cout <<"YES";
    else cout << "NO";

    cout << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}