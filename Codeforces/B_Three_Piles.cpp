#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll a, b, c; cin >> a >> b >> c;
    
    if(a <= b){
        ll x = abs(a - b);
        ll y = abs(a + c - b);
        if(x <= y) a += c;
    }
    else{
        a += c;
    }
    cout << abs(a - b) << endl;
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