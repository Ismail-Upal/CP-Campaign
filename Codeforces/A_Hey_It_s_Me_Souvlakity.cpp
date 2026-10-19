#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s; cin >> s;

    vector<int> v;
    for(int i = 0; i < n; i++){
        if(s[i] == '1') v.push_back(i + 1);
    }

    if(sz(v) == 1) cout << 0 << endl;
    else if(sz(v) > 2) cout << v.back() - v[0] << endl;
    else cout << 1 << endl;
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