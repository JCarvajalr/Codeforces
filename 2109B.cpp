// B. Slice to Survive
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)

using namespace std;
int calDiv(int n){
    int t; double x = n;
    for (t = 0; x > 1; t++) x /= 2;
    return t;
}
void solve() {
    int n, m, a, b, i, t = 1;
    cin >> n >> m >> a >> b;
    a = min(a, n - a + 1);
    b = min(b, m - b + 1);
    
    t = calDiv(a) + calDiv(m);
    i = calDiv(b) + calDiv(n);
    t = min(t, i);

    cout << t+1 << endl;
}

 
int main() {
    int test;
    cin >> test;
    while (test--){
        solve();
    }
    return 0;
}