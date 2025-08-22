// Boredom
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << " /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define sortAsc(vect) sort(vect.begin(), vect.end())
#define sortDesc(vect) sort(vect.begin(), vect.end(), greater<int>())
// int maxInt = INT_MAX;

const int N =1e5 + 5;
ll ar[N];

using namespace std;
int main() {
    fastread();
    int n, temp, i, m = 0;
    
    cin >> n;

    _for(n) {
        cin >> temp;
        ar[temp] += temp;
        m = max(m, temp);
    }
    for (i = 2; i <= m; i++) {
        ar[i] = max(ar[i] + ar[i-2], ar[i-1]);
    }
    cout << ar[i-1] << endl;
    return 0;
}