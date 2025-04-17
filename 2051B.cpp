// B. Journey
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
using namespace std;

void solve() {
    ll n, temp, sum = 0;
    ll days[3];
    int i;
    cin >> n;
    for (i = 0; i < 3; i++) {
        cin >> days[i];
        sum += days[i];
    }
    double x = ceil((n*1.0) / sum);
    temp = sum * x--;
    for (i = 2; (temp >= n) && i >= 0; i--) {
        temp -= days[i];
    }
    i = (3 * x) + (i+2);
    cout << i << endl;

}

int main() {
    fastread();
    int tests;
    cin >> tests;
    while (tests--){
        solve();
    }
    return 0;
}