// C. Preparing for the Exam
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << " /:" << #a << "=" << a << " , " << #b << "=" << b << endl

using namespace std;
void solve() {
    int n, m, k, i, temp, miss;
    cin >> n >> m >> k;
    int ar[m];

    _for(m) cin >> ar[i];

    int b; temp = 0; miss = n;
    _for(k) {
        cin >> b;
        if ((temp + 1) != b) miss = b-1;
        temp = b;
    }

    _for(m) {
        if (k < (n-1)) cout << "0";
        else if (k == n) cout << "1";
        else if (ar[i] == miss) cout << "1";
        else cout << "0";
    }

    cout << "\n";
}

int main() {
    int test;
    cin >> test;
    while (test--){
        solve();
    }
    return 0;
}