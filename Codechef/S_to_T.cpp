#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        string s, t; cin >> s >> t;
        if(s == t){
            cout << 0 << endl; continue;
        }
        int ls = -1, lt = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){ls = i; break;}
        }
        for(int i = 0; i < n; i++){
            if(t[i] == '1'){lt = i; break;}
        }
        if(ls != lt or (ls == -1 and lt) or (ls and lt == -1)){
            cout << -1 << endl; continue;
        } 

        int diff = -1;
        for(int i = n - 1; i >= 0; i--){
            if(s[i] != t[i]){
                diff = i; break;
            }
        }
        vector<int> ans;
        for(int i = ls; i < diff - 1; i++){
            if(s[i + 1] == '0'){
                ans.push_back(i);
                s[i + 1] = '1';
            }
        }
        ans.push_back(diff - 1);
        for(int i = diff - 1; i >= ls; i--){
            if(s[i] != t[i]) ans.push_back(i - 1);
        }

        cout << sz(ans) << endl;
        for(int i : ans) cout << i + 1 << ' ';
        cout << endl;
    }
    
    return 0;
}