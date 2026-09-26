#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n + 2, 1e9), mp(n + 1);

    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        mp[x] = i;
        v[i] = x;
    }   

    vector<int> ans(n + 1, 0);
    for(int i = 1; i <= n; i++){
        int m = mp[i];
        int l = m - 1, r = m + 1;
        
        if(m == 1){
            if(v[m] < v[r]) ans[m] = 0;
            else ans[m] = 1 + ans[r];
        }
        else if(m == n){
            if(v[l] > v[m]) ans[m] = 0;
            else ans[m] = 1 + ans[l];
        }
        else{
            if(v[l] > v[m] and v[m] < v[r]) ans[m] = 0;
            else if(v[l] < v[m] and v[m] > v[r]) ans[m] = min(ans[l], ans[r]) + 1;
            else if(v[l] < v[m]) ans[m] = 1 + ans[l];
            else if(v[m] > v[r]) ans[m] = 1 + ans[r];
        }   
    }
    for(int i = 1; i <= n; i++) cout << ans[i] << " ";
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