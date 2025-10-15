// 2024 ICPC Latin American Regional Programming Contest
// K. Kool Strings
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
const double PI = 3.141592653589793;

void flip(char& ch) {
	if (ch == '0') ch = '1';
	else ch = '0';
}

int main() {
    fastread();
	int k;
	string s;
	cin >> k >> s;
    
    int res = 0;
    
    int a = 0, c = 1;
    if (k == 2) {
    	int r1 = 0, r2 = 0; char ch;
    	string s1 = "";
    	for(int i = 0; i < s.size(); i++) {
    		ch = (i%2 == 0) ? '1' : '0';
    		if (s[i] != ch) r1++;
    		else r2++;
			s1 += ch;
		}
		if (r1 < r2) {
			res = r1;
			s = s1;
		} else {
			res = r2;
			s = s1.substr(1) + ((s1[s1.size() - 1] == '0') ? '1' : '0');
		}
	} else {
	    for (int i = 1; i < s.size(); i++) {
	    	if (s[a] == s[i]) c++;
			else c = 1;
	    	
	    	if (c == k) {
	    		if (s[i+1] == s[i]) flip(s[i]);
	    		else flip(s[a]);
	    		res++;
	    		c = 1;
			}
			a = i;
		}
	}
    cout << res << " " << s;
    
    return 0;
}