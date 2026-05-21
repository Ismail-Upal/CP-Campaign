#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    string s; cin >> s;
    int cnt4 = count(s.begin(), s.end(), '4');
    int cnt2 = count(s.begin(), s.end(), '2');

    int ans = cnt4 + cnt2, cnt13 = 0;
    for(auto i : s){
        if(i == '2') cnt2--;
        if(i == '1' or i == '3') cnt13++;
        ans = min(ans, cnt4 + cnt13 + cnt2);
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