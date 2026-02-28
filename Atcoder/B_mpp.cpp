#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    string s; cin >> s;
    map<char, int> mp;
    int mx = 0;
    for(auto i : s){
        mp[i]++;
        mx = max(mx, mp[i]);
    }
    for(auto i : s){
        if(mp[i] != mx) cout << i ;
    }
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; 
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}