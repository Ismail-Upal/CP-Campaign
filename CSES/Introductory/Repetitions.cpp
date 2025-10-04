#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    string s; cin >> s;
    int cnt = 1, ans = 1;
    for(int i = 1; i < sz(s); i++){
        if(s[i] == s[i-1])cnt++;
        else{
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    ans = max(cnt, ans);
    cout << ans << endl;
    return 0;
}