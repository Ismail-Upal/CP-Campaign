#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll h, w, n, q; cin >> h >> w >> n >> q;
    map<ll, ll> row, col;
    vector<ll> vr, vc;

    vr.push_back(0), vc.push_back(0);
    row[0] = 0, col[0] = 0;

    for(int i = 0; i < n; i++){
        ll r, c; cin >> r >> c;

        if(!row[r]) vr.push_back(r);
        if(!col[c]) vc.push_back(c);

        row[r]++;
        col[c]++;
    }

    sort(vr.begin(), vr.end());
    sort(vc.begin(), vc.end());

    ll N = sz(vr), M = sz(vc);  
    vector<ll> prefr(N, 0), prefc(M, 0);

    for(ll i = 1; i < N; i++){
        prefr[i] = prefr[i - 1] + row[vr[i]]; 
    }
    for(int i = 1; i < M; i++){
        prefc[i] = prefc[i - 1] + col[vc[i]]; 
    }

    while(q--){
        ll t, L, R; cin >> t >> L >> R;
        if(t == 1){
            ll l = 1, r = N - 1, m, idxl = -1, idxr = -1;
            while(l <= r){
                m = l + (r - l) / 2;
                if(L <= vr[m]){
                    idxl = m;
                    r = m - 1;
                }
                else l = m + 1;
            }

            l = 1, r = N - 1;
            while(l <= r){
                m = l + (r - l) / 2;
                if(vr[m] <= R){
                    idxr = m;
                    l = m + 1;
                }
                else r = m - 1;
            }

            if(idxl != -1 and idxr != -1){
                cout << prefr[idxr] - prefr[idxl - 1] << endl;
            }
            else cout << 0 << endl;
        }
        else{
            ll l = 1, r = M - 1, m, idxl = -1, idxr = -1;
            while(l <= r){
                m = l + (r - l) / 2;
                if(L <= vc[m]){
                    idxl = m;
                    r = m - 1;
                }
                else l = m + 1;
            }

            l = 1, r = M - 1;
            while(l <= r){
                m = l + (r - l) / 2;
                if(vc[m] <= R){
                    idxr = m;
                    l = m + 1;
                }
                else r = m - 1;
            }

            if(idxl != -1 and idxr != -1){
                cout << prefc[idxr] - prefc[idxl - 1] << endl;
            }
            else cout << 0 << endl;
        }
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