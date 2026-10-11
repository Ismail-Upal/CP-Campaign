#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, k; cin >> n >> k;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }

    if(((mp[0] + 1) / 2) < k){
        cout << "NO" << endl;
        return;
    }

    int mex = 0;
    for(int i = 0; i <= n; i++){
        if(mp[i] >= k) mex = i + 1;
        else break;
    }

    int ok = 1; 
    
    for(int i = 0; i < mex; i++){
        if(mp[i] < (2 * k)){
            if(((mp[i] + 1) / 2) >= k) ok = 0;
            break;
        }
    }

    if(ok) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}