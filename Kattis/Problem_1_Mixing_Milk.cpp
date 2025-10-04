#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
void setIO(string name){
    freopen((name+".in").c_str(),"r",stdin);
    freopen((name+".out").c_str(),"w",stdout);
}
//-------------------------------------------

int32_t main()
{   
    opt();  setIO("mixmilk");
    
    vector<pair<ll, ll>> v(4);
    for(int i = 0; i < 3; i++){
        cin >> v[i].first >> v[i].second;
    }
    int f = 1;
    for(int i = 0; i < 100; i++){
        int b1 = i % 3;
        int b2 = (i + 1) % 3;

    
            ll m = v[b1].second;
            ll giv = min(v[b2].first - v[b2].second, m);
            v[b2].second += giv;
            v[b1].second -= giv;
       
    }
    for(int i = 0; i < 3; i++){
        cout << v[i].second << endl;
    }
    
    return 0;
}