#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    map<int, int> mpa, mpb;
    for(int i = 1; i <= n; i++){
        int a, b; cin >> a >> b;
        mpa[a]++; mpb[b]++;
    }

    for(int i = 1; i <= m; i++){
        cout << mpb[i] - mpa[i] << endl; 
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