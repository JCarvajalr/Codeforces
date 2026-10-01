// B. Hypercarp and the Control Panel
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define deb(x) cout << " ." << #x << "=" << x << endl
using namespace std;

void solve() {
    int n, i;
    cin >> n;
    vector<int> arr(n), cnt(1, 1);
    _for(n) cin >> arr[i];

    bool f = 0;
    int res = 1, x = 0, temp = 0;
    for (i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) f = 1;
        else {
            res++; temp = 0;

            if (i+1 < n && arr[i+1] == arr[i]) {
                if (i-2 < 0 || arr[i-2] != arr[i]) temp = 1 + f;
            } else if (f && (i+1 >= n || arr[i-1] != arr[i+1])) {
                temp = 1;
                f = 0;
            } else f = 0;
            
            x = max(x, temp);
            f = 0;
        }
    }
    res += x;
    cout << res << "\n";

}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}