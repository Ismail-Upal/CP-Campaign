#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll q; cin >> q;
    priority_queue<int, vector<int>, greater<int>> pq;

    for(ll i = 1; i <= q; i++){
        ll t, h; cin >> t >> h;
        if(t == 1) pq.push(h);
        else{
            while(pq.size() and pq.top() <= h){
                pq.pop();
            }
        }
        cout << sz(pq) << endl;
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