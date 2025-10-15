// 2024 ICPC Latin American Regional Programming Contest
// J. Jigsaw of Shadows
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

int main() {
    fastread();
	int i;
	double grad; int n, x, h;
	cin >> grad >> n;
	
	grad = grad * PI / 180.0;
	vector<pair<double, double> > pos(n);
	long double res = 0;
	double den = tan(grad);
	_for(n) {
		cin >> x >> h;
		res = h/den;
		pos[i] = make_pair(x, x+res);
	}
    sortAsc(pos);
    res = 0;
	int a = 0, b = 0;
	for (i = 1; i < n; i++) {
		if (pos[i].first > pos[b].second) {
			res += pos[b].second - pos[a].first;
			a = b = i;
		} else {
			b = (pos[b].second > pos[i].second) ? b : i;
		}
	}
	
    res += pos[b].second - pos[a].first;
	
    cout << fixed << setprecision(5);
    cout << res << endl;
    
    return 0;
}