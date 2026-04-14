#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, k;
    while(cin >> n >> k){
        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        ll r = k % n;
        if(r == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
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