#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n, h; cin >> n >> h;
	vector<ll> v(n);
	for (auto &x : v) cin >> x;

	vector<ll> cnt(n);
	for(ll i = 0; i < n; i++){
		ll curr = v[i];
		cnt[i] = h - curr;
		for(ll j = i+1; j < n; j++)
			curr = max(curr, v[j]), cnt[i] += h - curr;
            
		curr = v[i];
		for(ll j = i-1; j >= 0; j--)
			curr = max(curr, v[j]), cnt[i] += h - curr;
	}

    ll best = 0;
	for(ll i = 0; i < n; i++){
		ll mx = v[i], arg = i;
		for(ll j = i; j < n; j++){
			if (v[j] > mx) {
				mx = v[j];
				arg = j;
			}
			best = max(cnt[i] + cnt[j] - cnt[arg], best);
		}
	}
	cout << best << "\n";
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}