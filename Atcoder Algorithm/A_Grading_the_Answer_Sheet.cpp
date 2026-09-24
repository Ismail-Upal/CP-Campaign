#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

void Solve(){
    int n, k; cin >> n >> k;
    string s, t; cin >> s >> t;

    int wrong = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != t[i]) wrong++;
    }

    int ans = 0;
    if(wrong > k) ans = wrong - k;
    cout << ans;
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