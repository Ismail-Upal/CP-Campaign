#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s; cin >> s;

    int cnt = 1, ans = 0;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1]) cnt++;
        else{
            ans += cnt / 3;
            cnt = 1;
        }
    }
    ans += cnt / 3;
    cout << ans << endl;
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