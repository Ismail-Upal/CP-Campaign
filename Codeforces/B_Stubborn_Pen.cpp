#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    if(s[0] == 'B') ans = 1;
    int j = 1;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1]) j++;
        else{
            ans += j - 1;
            j = 1;
        }
    }

    ans += j - 1;
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