// 2024 ICPC Latin American Regional Programming Contest
// F. Finding Privacy
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for(i=0; i<n; i++)
#define _forj(n) for(j=0; j<n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << " :/" << #a << "=" << a << "  ," << #b << "=" << b << endl
#define debArr(array) cout << "  :/" << #array << "[] = "; for (int I=0; I < (int) array.size(); I++) cout << array[I] << " "; cout << endl
using namespace std;

int main() {
	fastread();
	int k, n, i;
	
	cin >> k >> n;
	
	int temp = n - k;
	string res = "";
	
	if (temp > k && temp - k <= k) {
		temp = temp - k;
		_for(k-temp) res += "-X";
		_for(temp) res += "-X-";
	}
	else if (temp == k-1 || temp == k) {
		_for(n) {
			if (i%2 == 0) res += "X";
			else res += "-";
		}
	}
	else {
		res = "*";
	}
	
	cout << res << endl;
	
	return 0;
}