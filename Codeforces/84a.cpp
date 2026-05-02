#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    set<int> se;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
        mp[x]++;
    }
    int ok = 0;
    
    if(sz(se) == 1) ok = 1;
    else if(sz(se) == 2){
        int x = -1, y = -1;
        for(auto i : mp){
            if(x == -1) x = i.second;
            else y = i.second;
        }
        if(abs(x - y) <= 1) ok = 1;
    }
     
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
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