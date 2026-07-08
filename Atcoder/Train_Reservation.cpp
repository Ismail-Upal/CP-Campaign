#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; char x; 
    cin >> n >> x;
    int y = x - 'A';

    bool ok = 0;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if(s[y] == 'o') ok = 1; 
    }

    if(ok) cout << "Yes";
    else cout << "No";
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