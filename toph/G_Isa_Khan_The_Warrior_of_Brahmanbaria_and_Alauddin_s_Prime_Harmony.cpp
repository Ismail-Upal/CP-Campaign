#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

const int N = 1e4 + 3;
vector<bool> prime(N + 3, true);
vector<int> p;
set<int> se;

void sieve() {
	prime[0] = 0;
	prime[1] = 0;

	for (int i = 2; i * i <= N; i ++) {
		if (prime[i]) {
			for (int j = i * i; j <= N; j += i) {
				prime[j] = 0;
			}
		}
	}

	for (int i = 2; i < N; i++) {
		if (prime[i]) {
			p.push_back(i);
		}
	}

	int d = p.size() - 1;

	for (int i = 1; i < d ; i++) {
		int l = p[i - 1], r = p[i + 1];
		if ((l + r) == p[i] * 2) se.insert(p[i]);
	}
}

int main() {
	opt();

	sieve();
	ll a, b, c; cin >> a >> b >> c;

	set<int> ans;

	for (int i = 0; i <= 1e4; i++) {
		ll x = i;
		ll d = (a * x * x) + (b * x) + c;
		if (d > 1e4) break;

		if (prime[d] && se.count(d)) ans.insert(d);
	}

	if (ans.size() == 0) {
		cout << -1 ;
		return 0;
	}
    cout << ans.size() << endl;
    for(int i : ans ) cout << i << " ";

    return 0;
}