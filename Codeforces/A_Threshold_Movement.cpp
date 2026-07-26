#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    if(n % 2){
        cout << "NO" << endl; return;
    }

    int l = 1e9, r = 0;
    for(int i = 0; i < n; i += 2){
        int x = v[i], y = v[i + 1];
        l = min(l, x);
        r = max(r, y);
        if(l - 1 <= r){
            cout << "NO" << endl; return;
        }
    }
    cout << "YES" << endl;
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