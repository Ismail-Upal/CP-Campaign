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
 
    int n, k; cin >> n >> k;
    string s; cin >> s;
    set<char> se;
    for(auto i : s) se.insert(i);
    string ans = "";
    if(k > n){
        ans += s;
        for(int i = 0; i < k - n; i++){
            ans += *se.begin();
        }
        cout << ans ;
    }
    else{
        string ans;
        for(int i = k - 1; i >= 0; i--){
            auto big = se.upper_bound(s[i]);
            if(big != se.end()){
                ans.resize(k);
                ans[i] = *big;
                for(int j = 0; j < i; j++) ans[j] = s[j];
                for(int j = i + 1; j < k; j++) ans[j] = *se.begin();
                cout << ans << endl;
                return 0;
            }
        }
    }
    
    return 0;
}