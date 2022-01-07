#include <bits/stdc++.h>

#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define cnew cout<<"\n";
#define all(v) v.begin(), v.end()
#define fo(i, n) for(int i = 0; i < n; i++)
#define fok(i, k, n) for (int i = k; i < n; i++)
#define foit(it,v) for(auto it=v.begin();it!=v.end();it++)
#define output(x) cout << ( x ? "YES" : "NO" ) << '\n' ;
#define pb push_back
#define FLASH ios_base::sync_with_stdio(false), cin.tie(NULL);
const int mod = 1e9 + 7;
const int  D = 1e8 + 1;

using namespace std;
/*-------------------------------------------------------------------*/
long long int a[D];


void solve() {
	int t;
	cin >> t;
	a[0] = 1;
	for (long long int i = 1; i <= D; i++) {
		if (i >= 11) {
			a[i] = a[i - 1] * 3;
		} else {
			a[i] = a[i - 1] * 2;
		}
	}

	while (t--) {
		long long int n, d;
		cin >> n >> d;
		if (n < d) {
			cout << n << endl;

		} else {
			if (a[d] > n) {
				cout << n << endl;
			} else cout << a[d] << endl;

		}
	}
}

int main() {
	solve();
}