#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    int n, k; cin >> n >> k;
    vector<int>v(n+1);
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    for(int i = 1; i <= n; i++){
        int need = k - v[i];
        if(mp.find(need) != mp.end()){
            cout << i << " " << mp[need] << endl;
            return 0;
        }
        mp[v[i]] = i;
    }
    cout << "IMPOSSIBLE";
    return 0;
}