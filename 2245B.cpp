// B. Delete and Concatenate
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
#define _forj(n) for (j = 0; j < n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << "  /:" << #a << "=" << a << " , " << #b << "=" << b << endl
#define debArr(array) cout << "  /:" << #array << "[] = "; for (int I = 0; I < (int) array.size(); I++) cout << array[I] << " "; cout << endl;
#define sortAsc(vect) sort(vect.begin(), vect.end())
#define sortDesc(vect) sort(vect.begin(), vect.end(), greater<int>())
using namespace std;

int arr[200005];

void solve() {
    int i;
    ll n, c, total = 0;
    cin >> n >> c;
    _for(n) cin >> arr[i];
    sort(arr, arr + n);

    int b = n;
    for (i = 0; i < n && i < b; i++) {
        if (arr[i] < c) total += arr[--b];
        else total += arr[i];
        total -= c;
    }
    // deb(total);
    cout << total << endl;

}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}