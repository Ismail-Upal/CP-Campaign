#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    vector<int> v(n + 1), clt(m + 1);
    int ok1 = 1, ok2 = 1;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        clt[v[i]]++;
    }

    for(int i = 1; i <= m; i++){
        if(clt[i] > 1) ok1 = 0;
        if(clt[i] == 0) ok2 = 0;
    }
    if(ok1) cout << "Yes" << endl;
    else cout << "No" << endl;
    if(ok2) cout << "Yes" << endl;
    else cout << "No" << endl;
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