// 2024 ICPC Latin American Regional Programming Contest
// E. Evereth Expedition
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

int sum[100005];
int calc_range(int l, int r) {
	if (l > r) return 0;
	return sum[r + 1] - sum[l];
}

int main() {
    fastread();
	
	int n, i;
	cin >> n;
	vector<int> a(n);
	vector<int> ans(n);
	vector<int> pos(n+1, -1);

	sum[0] = 0;
	_for(n) {
		cin >> a[i];
		if (a[i] != 0) {
			pos[a[i]] = i;
			sum[i+1] = sum[i] + 1;
		} else {
			sum[i+1] = sum[i];
		}
	}
	int l = 0, r = n -1;
	deque<int> q;
	bool res = true;
	
//	debArr(pos);
//	cout << "  /: sum = "; _for(n+1) cout << sum[i] << " "; cout << endl;
		
	for(i = 1; i <= n; i++) {
		if (pos[i] == -1) {
			q.push_back(i);
		} else if (l <= pos[i] && pos[i] - l <= q.size()
				 && (calc_range(l, pos[i] - 1) == 0)
			 	 && (calc_range(r - (q.size() - (pos[i] - l)) + 1, r) == 0)) {
			while (l < pos[i]) {
				ans[l] = q.front();
				q.pop_front();
				l++;
			}
			ans[l] = i;
			l++;
			
			while(!q.empty()) {
				ans[r] = q.front();
				r--;
				q.pop_front();
				
			}
		} else if (r >= pos[i] && (r - pos[i] <= q.size())) {
			while (r > pos[i]) {
				ans[r] = q.front();
				q.pop_front();
				r--;
			}
			ans[r] = i;
			r--;
			
			while(!q.empty()) {
				ans[l] = q.front();
				l++;
				q.pop_front();
				
			}
		} else {
			res = false;
			break;
		}
	}
	while (!q.empty()) {
		ans[l] = q.front();
		l++;
		q.pop_front();
	}
//	debArr(ans);
	if (res) _for(n) cout << ans[i] << " ";
	else cout << "*";
	cout << endl;
	
    return 0;
}