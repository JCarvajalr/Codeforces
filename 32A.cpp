// A. Reconnaissance
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)

using namespace std;

int main() {
    fastread();
    int n, d, i, j, temp;
    cin >> n >> d;
    vector<int> heig(n);
    
    _for(n) cin >> heig[i];
    sort(heig.begin(), heig.end());

    int cnt = 0;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            temp = heig[i] - heig[j];
            if (temp < 0) temp *= -1;
    
            if (temp <= d) cnt += 2;
            else break;
        }
    }

    cout << cnt << endl;
    return 0;
}