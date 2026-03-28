#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;

    for(int i = 0; i <= 7; i++){
        if(s.find(t) != string::npos){
            cout << i << endl;
            return;
        }
        s += s;
    }
    cout << -1 << endl;
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