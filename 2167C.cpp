// C. Isamatdin and His Magic Wand!
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define sortAsc(vect) sort(vect.begin(), vect.end())
#define sortDesc(vect) sort(vect.begin(), vect.end(), greater<int>())
// int maxInt = INT_MAX;

using namespace std;
void solve() {
    int n, i;
    cin >> n;
    vector<ll> a(n);
    bool flag = false;
    _for(n) {
        cin >> a[i];
        if (i > 0 && a[i]%2 != a[i-1]%2) flag = true;
    }
    // sort(a.begin(), a.end(), [](int a, int b) {
    //     return a%2 != b%2 && a < b;
    // });
    if (flag) sortAsc(a);
    _for(n) {
        cout << a[i] << " ";
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