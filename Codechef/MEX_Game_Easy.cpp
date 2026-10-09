#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n), mp(103, 0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }

    int mx = 0;
    for(int i = 0; i <= 100; i++){
        if(mp[i]) mx = i + 1;
        else break;
    }

    int cnt = 0;
    for(int i = mx + 1; i <= 100; i++){
        cnt += (mp[i] * (i - mx - 1));
    }

    for(int i = 0; i < mx; i++){
        cnt += i * (mp[i] - 1);
    }

    if(cnt % 2) cout << "Alice";
    else cout << "Bob";

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