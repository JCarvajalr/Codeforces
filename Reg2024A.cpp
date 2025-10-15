// 2024 ICPC Latin American Regional Programming Contest
// A. Append and Panic!A. Append and Panic!
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

int a[300];

int main() {
    fastread();
    string s; int i;
    cin >> s;
    
    for (i = s.size(); i >= 0; i--) {
        if (a[s[i]] > 0) {
            i++;
            break;
        }
        a[s[i]]++;
    }
    // deb(i);
    cout << i << endl;
    
    return 0;
}