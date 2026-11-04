#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        char a, b; cin >> a >> b;
        if(a != b) cnt++;
    }

    if(cnt % 2 == 0) cout << cnt / 2 << endl;
    else cout << -1 << endl;
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