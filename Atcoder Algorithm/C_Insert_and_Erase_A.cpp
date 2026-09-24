#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    string s, t; cin >> s >> t;
    string x, y;
    for(auto i : s){
        if(i != 'A') x += i;
    }
    for(auto i : t){
        if(i != 'A') y += i;
    }
    if(x != y){
        cout << -1 ; return;
    }

    int i = 0, j = 0, ans = 0;
    while(i < sz(s) or j < sz(t)){
        int cnt1 = 0, cnt2 = 0;
        while(i < sz(s) and s[i] == 'A') i++, cnt1++;
        while(j < sz(t) and t[j] == 'A') j++, cnt2++;

        ans += abs(cnt1 - cnt2);
        i++, j++;
    }
    cout << ans ;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; 
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}