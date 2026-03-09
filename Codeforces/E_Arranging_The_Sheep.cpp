#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cnt = count(s.begin(), s.end(), '*');
    cnt = (cnt + 1) / 2;
    int m = 0;
    while(cnt > 0){
        if(s[m] == '*') cnt--;
        m++;
    }
    m--;
    ll ans = 0;
    for(int i = m - 1, j = 0; i >= 0; i--){
        if(s[i] == '*') ans += j;
        else j++;
    }
    for(int i = m + 1, j = 0; i < n; i++){
        if(s[i] == '*') ans += j;
        else j++;
    }
    cout << ans << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}