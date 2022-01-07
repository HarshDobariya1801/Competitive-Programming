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
		int n, sum = 0, multiple = 1, cnt = 0; cin >> n;
		int a[n];
		fo(i, n) {
			cin >> a[i];
		}

		fo(i, n) {
			sum = sum + a[i];
			multiple = multiple * a[i];
		}

		//cout << sum << " " << multiple << endl;

		if (sum != 0 && multiple != 0) {
			cout << cnt << endl;
		} else {
			cnt++;
			fo(i, n) {
				a[0] = a[0] + 1;
				if (a[i] == 0) {
					a[i] = a[i] + 1;
					cnt++;
				}


				sum = sum + a[i];
				multiple = multiple * a[i];
				if (sum != 0 && multiple != 0) {
					cout << cnt << endl;
					continue;
				}
			}
		}
	}
}


int main() {
	solve();
}