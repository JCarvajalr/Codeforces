// B. Always Changing
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
using namespace std;

void solve() {
    int n, i, temp;
    string s;
    cin >> n >> s;
    int cnt[] = {0, 0}, del[] = {0, 0};
    cnt[s[0]-48]++;
    for (i = 1; i < n; i++) {
        cnt[s[i]-48]++;
        if (s[i] == s[i-1]) {
            del[s[i]-48]++;
        }
    }

    if (abs(cnt[0] - cnt[1]) > 2) {
        cout << "-1" << endl;
        return;
    }
    temp = max(del[0], del[1]) * 2 - (del[0] != del[1]);
    cout << temp << endl;
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}