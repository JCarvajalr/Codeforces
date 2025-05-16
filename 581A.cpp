#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define _for(n) for (i = 0; i < n; i++)
 
using namespace std;

int main() {
    int a, b, i;
    double temp;
    
    cin >> a >> b;
    cout << ((a < b) ? a : b); cout << " ";
    temp = (a - b) / 2.0;
    if (temp < 0) temp *= -1;
    a = (temp >= 1) ? temp : 0;
    cout << a;
    
    return 0;
}
