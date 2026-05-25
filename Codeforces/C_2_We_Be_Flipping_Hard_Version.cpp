#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    ll sum = accumulate(v.begin(), v.end(), 0ll);

    vector<ll> suff(n + 2, 0);
    for(ll i = n - 1; i >= 0; i--){
        suff[i] = suff[i + 1] + v[i];
    }

    ll k = 0, pref = 0;
    for(ll i = 0; i < n; i++){
        if(v[i] > 0){
            if(pref + suff[i + 1] - v[i] > sum){
                sum = pref + suff[i + 1] - v[i];
                k = i;
            }
        }
        pref += abs(v[i]);
    }

    if(k == 0){
        cout << 0 << endl << endl;
        return;
    }

    vector<ll> seq;
    ll op = 0;
    for(ll i = k - 1; i >= 0; i--){
        if(op) v[i] *= -1;
        if(v[i] > 0){
            seq.push_back(i + 1);
            op = op ^ 1;
        }
    }

    seq.push_back(k + 1);
    cout << sz(seq) << endl;
    for(auto i : seq) cout << i << " ";
    cout << endl;
}

int main()
{   
    fast;
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}

