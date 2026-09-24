#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

void Solve(){
    string a, b; cin >> a >> b;
    int q; cin >> q;

    vector<ll> len = {0, sz(a), sz(b)};
    vector<vector<ll>> cnt(100, vector<ll> (26));
    for(auto i : a){
        cnt[1][i - 'a']++;
    }
    for(auto i : b){
        cnt[2][i - 'a']++;
    }

    while(len.back() < 1e18){
        ll n = sz(len);
        ll x = len[n - 1] + len[n - 2];
        
        for(int i = 0; i < 26; i++){
            cnt[n][i] += cnt[n - 1][i] + cnt[n - 2][i];
        }
        len.push_back(x);
    }

    while(q--){
        ll l, r; char ch; 
        cin >> l >> r >> ch;
        l--;
        int c = ch - 'a';
        
        ll tot = r, R = 0, i = sz(len) - 1;
        while(i > 0){
            if(len[i] <= tot){
                tot -= len[i];
                R += cnt[i][c]; 
            }
            i--;
        }

        ll L = 0;
        tot = l, i = sz(len) - 1;
        while(i > 0){
            if(len[i] <= tot){
                tot -= len[i];
                L += cnt[i][c];
            }
            i--;
        }

        cout << R - L << endl;
    }
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}