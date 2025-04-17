// B. Young Photographer
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)

using namespace std;
int ranges[1010];

int main() {
    fastread();
    int n, d, a, i, b, x, temp;

    cin >> n >> x;

    _for(n) {
        cin >> a >> b;
        if (b < a) swap(a, b);
        ranges[a]++;
        ranges[b+1]--;
    }
    temp = 0;
    d = INT_MAX;
    _for(1010) {
        temp += ranges[i];
        if (temp == n) d = min(d, abs(x - i));
    }
    cout << (d == INT_MAX ? -1 : d);

    return 0;
}