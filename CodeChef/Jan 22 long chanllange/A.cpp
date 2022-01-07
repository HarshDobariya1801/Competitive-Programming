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

using namespace std;
/*-------------------------------------------------------------------*/

void solve() {
	int t;
	cin >> t;
	while (t--) {
		double t1, t2, r1, r2;
		cin >> t1 >> t2 >> r1 >> r2;
		if ((t1 * t1 / (r1 * r1 * r1)) == (t2 * t2 / (r2 * r2 * r2))) cy;
		else cn;
	}
}

int main() {
	solve();
}