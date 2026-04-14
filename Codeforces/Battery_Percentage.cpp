#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    string s; cin >> s;
    s.erase(s.find('%'));
    int n = stoi(s);
    
    int ans = 0;
    for(int i = n; i < 100; i++){
        if(i < 60) ans++;
        else if(i < 80) ans += 2;
        else ans += 3;
    }

    cout << ans << " minutes" << endl;
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