// E. Sponsor of Your Problems
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << " /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define sortAsc(vect) sort(vect.begin(), vect.end())
#define sortDesc(vect) sort(vect.begin(), vect.end(), greater<int>())

using namespace std;
void solve() {
    string l, r;
    cin >> l >> r;

    int res = 0, temp;
    for (size_t i = 0; i < l.size(); i++) {
        temp = r[i] - l[i];
        if (temp == 0) res += 2;
        else if (temp == -9) res++;
        else if (temp == 1) res++;
        else if (temp > -9) break;
    }
    cout << res;
    
}

int main() {
    fastread();
    int test = 1;
    cin >> test;
    while (test--){
        solve();
    }
    return 0;
}