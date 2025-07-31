// A. Add or XOR
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
    int j, i, temp;
    int a, b, x, y, res = -1;
    cin >> a >> b >> x >> y;
    
    if (a > b) {
        if ((a ^ 1) == b) res = y;
    }
    else {
        if (x < y) {
            res = x * (b - a);
        }
        else {
            temp = b - a;
            res = x * (temp/2);
            res += y * (temp/2);
            if (temp & 1) {
                if (a & 1) res += x;
                else res += y;
            }
        }
    }
    
    cout << res << endl;
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