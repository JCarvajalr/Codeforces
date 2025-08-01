// B. Unique Bid Auction
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << " /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define sortAsc(vect) sort(vect.begin(), vect.end())
#define sortDesc(vect) sort(vect.begin(), vect.end(), greater<int>())
 
using namespace std;
void solve() {
    int n, temp;
    cin >> n;
    int a[n+1] = {0}, b[n+1] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        a[temp]++; b[temp] = i;
    }
    temp = -1;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1) {
            temp = b[i];
            break;
        }
    }
    cout << temp << endl;
}

int main() {
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}