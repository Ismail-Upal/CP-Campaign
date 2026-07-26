#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    vector<int> ball(m + 1, -1);
    for(int i = 1; i <= n; i++){
        int c, s; cin >> c >> s;
        ball[c] = max(ball[c], s);
    }

    for(int i = 1; i <= m; i++) cout << ball[i] << " ";
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