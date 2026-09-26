#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; char c; cin >> n >> c;
    string s; cin >> s;
    int i = 0, j = n - 1;
    int ans = 0;
    while(i < j){
        if(s[i] == s[j]) i++, j--;
        else{
            if(s[i] == c or s[j] == c) ans++;
            else ans += 2;
            i++, j--;
        }
    }
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