// C. Wrong Binary Search
#include <bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL))
#define ll long long
#define _for(n) for(i=0; i<n; i++)
#define _forj(n) for(j=0; j<n; j++)
#define deb(x) cout << " ." << #x << "=" << x << endl
#define deb2(a, b) cout << " :/" << #a << "=" << a << "  ," << #b << "=" << b << endl
#define debArr(array) cout << "  :/" << #array << "[] = "; for (int I=0; I < (int) array.size(); I++) cout << array[I] << " "; cout << endl
using namespace std;

void solve() {
	int n, i, temp;
	bool res = true;
	string s;
	cin >> n >> s;
	
	vector<int> a(n);
	
	_for(n) {
		a[i] = i+1;
	}
	temp = 0;
	_for(n) {
		if (s[i] == '0') temp++;
		if (s[i] == '1') {
			if (temp == 1) {
				res = false; break;
			}
			temp = 0;
		}
		
		if (temp > 1) {
			swap(a[i], a[i-1]);
		}
	}
	if (temp == 1) res = false; 
	
	if (res) {
		cout << "YES\n";
		_for(n) cout << a[i] << " ";
	} else {
		cout << "NO";
	}
	cout << endl;
}

int main() {
	fastread();
	int test;
	cin >> test;
	while (test--) {
		solve();
	}
	return 0;
}