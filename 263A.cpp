// A. Beautiful Matrix
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
 
using namespace std;

int main() {
    int a, b, i, temp, c;
    
    for (a = 0; a < 5; a++) {
        for (b = 0; b < 5; b++) {
            cin >> temp;
            if (temp == 1) break;
        }
        if (temp == 1) break;
    }
    a = a - 2; a = (a < 0) ? a*-1 : a;
    b = b - 2; b = (b < 0) ? b*-1 : b;
    cout << (a + b) << endl;
    return 0;
}