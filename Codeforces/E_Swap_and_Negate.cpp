#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> odd, evn;
    
    for(int i = 1; i <= n; i++){
        ll x; cin >> x;
        if(i % 2) odd.push(x);
        else evn.push(x);
    }
    if(n == 1){
        cout << odd.top() << endl; return;
    }

    while(1){
        ll u = odd.top(), v = evn.top();
        if(u > 0 or v > 0) break;
        if(u == v and u == 0) break;

        odd.pop(); evn.pop();
        u = -u; v = -v;
        odd.push(v);
        evn.push(u);
    }
    while(1){
        ll u = odd.top();
        if(u >= 0) break;

        ll v = evn.top();
        u = -u;

        if(u <= v) break;
        odd.pop(); evn.pop();
        v = -v;
        evn.push(u);
        odd.push(v);
    }
    while(1){
        ll u = evn.top();
        if(u >= 0) break;

        ll v = odd.top();
        u = -u;
        
        if(u <= v) break;
        odd.pop(); evn.pop();
        v = -v;
        evn.push(v);
        odd.push(u);
    }

    ll sum = 0;
    while(!odd.empty()){
        sum += odd.top();
        odd.pop();
    }
    while(!evn.empty()){
        sum += evn.top();
        evn.pop();
    }
    
    cout << sum << endl;
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