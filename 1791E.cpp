#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
using namespace std;

void solve2() {
    int n, i;
    ll total = 0;
    cin >> n;
    vector<ll> array(n);
    for (i = 0; i < n; i++) cin >> array[i];
    
    sort(array.begin(), array.end());
    
    for (i = 0; i < n; i++){
        if (array[i] < 0) {
            if (i + 1 < n) {
                if (array[i+1] > 0){
                    if (array[i]*-1 > array[i+1]){
                        array[i] *= -1;
                        array[i+1] *= -1;
                    }
                } else {
                    array[i] *= -1;
                    array[i+1] *= -1;
                }
            }
        }
        total += array[i];
    }
    
    cout << total << endl;
}
 
int main() {
    fastread();
    int test;
    cin >> test;
    while (test--){
        solve2();
    }
    return 0;
}