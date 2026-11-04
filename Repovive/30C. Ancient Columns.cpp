#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()
#define inf INT_MAX


void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    string s; cin >> s;

    int l = 0, r = n - 1;
    int mn = inf;

    for(auto i : s){
        if(l > r) break;
        if(i == 'L'){
            v[l] = min(v[l], mn);
            mn = min(mn, v[l]);
            v[l] = 0;
            l++;
        }
        else{
            v[r] = min(v[r], mn);
            mn = min(mn, v[r]);
            v[r] = 0;
            r--;
        }
    }

    while(l <= r) v[l++] = min(v[l], mn);

    for(auto i : v) cout << i << " ";
    cout << endl;
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