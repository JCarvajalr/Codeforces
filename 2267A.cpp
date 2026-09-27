// A. Turn Into a Palindrome
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

void solve() {
    int n, res = 0;
    char c;
    string s;
    cin >> n >> c >> s;
    int mid = n / 2;
    int a = 0, b = n-1;

    for (;a < mid; a++, b--) {
        if (s[a] != s[b]) {
            if (s[a] == c || s[b] == c) res++;
            else res += 2;
        }
    }
    // deb(res);
    cout << res << endl;
    
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--) solve();
    return 0;
}