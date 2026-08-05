#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s; cin >> s;

    int ok = 0;
    for(int i = 1; i < n - 1; i++){
        if(s[i - 1] != s[i] and s[i] != s[i + 1]){
            ok = 1;
            if(s[i - 1] == s[i + 1]){
                ok = 2;
                break;
            }
        }
    }

    int ans = 1;
    char curr = s[0];
    for(int i = 0; i < n; i++){
        if(s[i] != curr) ans++;
        curr = s[i];
    }

    cout << ans - ok << endl;
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