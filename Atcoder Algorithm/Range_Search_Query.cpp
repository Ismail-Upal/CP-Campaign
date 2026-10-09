#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s, t; cin >> s >> t;

    vector<int> v;
    for(int i = 0; i < sz(s); i++){
        if(i + sz(t) <= sz(s)){
            int ok = 1;
            for(int j = 0; j < sz(t); j++){
                if(s[i + j] != t[j]) ok = 0;
            }

            if(ok) v.push_back(i + 1);
        }
    }

    while(n--){
        int l, r; cin >> l >> r;
        int lo = lower_bound(v.begin(), v.end(), l) - v.begin();

        int ok = 0;
        if(lo < sz(v)){
            int a = v[lo];
            int b = v[lo] + sz(t) - 1;
            if(b <= r) ok = 1;
        }
        
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
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