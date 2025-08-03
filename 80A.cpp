// A. Panoramix's Prediction
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define _for(n) for (i = 0; i < n; i++)
using namespace std;

bool isprime(int a) {
	if (a % 2 == 0) return false;
	for (int i = 3; (i*i) <= a; i += 2) {
		if (a % i == 0) return false;
	}
	return true;
}

int main() {
	fastread();
    int n, k;
	cin >> n >> k;
	while (!isprime(++n)); 
	cout << ((n == k) ? "YES" : "NO") << endl;

    return 0;
}