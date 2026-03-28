#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }

    sort(v.begin(), v.end());
    int ok = 1;
    for(int i : v){
        if(i < v[n - 1]){
            if(mp[i] > 1) ok = 0;
        }
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