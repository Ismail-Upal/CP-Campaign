#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, k; cin >> n >> k;
    ll oddA = 0, evnA = 0;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        if(x % 2) oddA++;
        else evnA++;
    }

    ll oddB = 0, evnB = 0;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        if(x % 2) oddB++;
        else evnB++;
    }

    if(k % 2){
        if(evnA > evnB){
            oddA += evnA - evnB;
            evnA = evnB;
        }
    }
    else{
        if(oddA > oddB){
            evnA += oddA - oddB;
            oddA = oddB;
        }
    }

    if(oddA == oddB and evnA == evnB) cout << "YES" << endl;
    else cout << "NO" << endl;

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