#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll a, b, x; cin >> a >> b >> x;
    if(a < b) swap(a, b);

    map<int, int> mp;
    mp[0] = 1;
    for(int i = b; i > 0; i /= x) mp[i]++;
    int y = 0;
    for(int i = a; i > 0; i /= x){
        if(mp[i]){
            y = i; break;
        }
    }

    ll ans = 0;
    for(int i = a; i != y; i /= x) ans++;
    for(int i = b; i != y; i /= x) ans++;

    int 

    cout << min({ans, a - b, op}) << endl;
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