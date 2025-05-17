// A. It's Time To Duel
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
 
using namespace std;
void solve() {
    int n, i, temp, a, b;
    cin >> n;
    string res = "NO";
    int arr[n];
    _for(n) {
        cin >> temp;
        a += temp;
        arr[i] = temp;
    }

    if (((arr[0] + arr[1]) == 0) || (a == n)) {
        cout << "YES" << endl;
        return;
    }
    for (i = 1; i < n-1; i++){
        a = arr[i-1];
        temp = arr[i];
        b = arr[i+1];
        if (temp == 0 && (a + b) <= 1) {
            res = "YES";
            break;
        }
    }

    cout << res << endl;
}

int main() {
    int test;
    cin >> test;
    while (test--){
        solve();
    }
    return 0;
}