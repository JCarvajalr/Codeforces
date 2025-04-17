// A. Consecutive Sum Riddle
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
using namespace std;

void solve() {
    long long n;
    cin >> n;

    // Encontramos el valor mínimo de k tal que la suma de 1 a k es mayor o igual a n
    long long k = sqrt(2 * n);
    
    while ((k * (k + 1)) / 2 < n) {
        k++;
    }

    long long sum_k = (k * (k + 1)) / 2;
    long long diff = sum_k - n;
    
    long long l = -diff; // Para ajustar la suma
    long long r = k;     // El valor máximo en la secuencia

    cout << "   # " << l << " " << r << "\n";
}

int main() {
    fastread();
    int test;
    cin >> test;
    while (test--){
        solve();
    }

    return 0;
}