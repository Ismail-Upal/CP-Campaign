#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n; cin >> n;
    ll even = 0, odd = 0;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        if(x % 2) odd++;
        else even++;
    }
    
    if(odd % 2 == 0){
        cout << "Moggity";
    }
    else if(even == 0){
        if(odd == 1 or odd > 3) cout << "Moggity";
        else cout << "Larpity";
    }
    else{
        if(odd == 1 and even == 1) cout << "Larpity";
        else cout << "Moggity";
    }
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