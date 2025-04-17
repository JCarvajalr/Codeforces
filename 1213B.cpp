#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

using namespace std;
void solve(){
    int n, i, badDays = 0;
    cin >> n;
    vector<int> prices(n);
    for (i = 0; i < n; i++) cin >> prices[i];

    int min = prices[n-1];
    for (i = n-2; i >= 0; i--) {
        if (prices[i] > min){
            badDays++;
        }
        min = (min > prices[i]) ? prices[i] : min;
    }

    cout << badDays << endl;
}

int main() {
    fastread();    
    int test;
    cin >> test;
    while (test--) solve();
    
    return 0;
}
