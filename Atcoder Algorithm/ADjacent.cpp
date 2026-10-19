#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    string s, t; cin >> s >> t;
    int ok = 0;
    if(s[0] == 'A' and (s[1] == 'D' or t[0] == 'D')) ok = 1;
    if(s[1] == 'A' and (s[0] == 'D' or t[1] == 'D')) ok = 1;
    if(t[0] == 'A' and (s[0] == 'D' or t[1] == 'D')) ok = 1;
    if(t[1] == 'A' and (s[1] == 'D' or t[0] == 'D')) ok = 1;

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