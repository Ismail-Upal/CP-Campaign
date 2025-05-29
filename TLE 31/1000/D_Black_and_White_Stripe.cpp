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
 
    tc{
        int n, k; cin >> n >> k;
        string s; cin >> s;
        vector<int>v;
        int ans = 0, w = 0, b = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                if(w > 0){v.push_back(-w); w = 0;}
                b++;
            }
            else if(s[i] == 'W'){
                if(b > 0){v.push_back(b); b = 0;}
                w++;
            }
        }
        if(w > 0)v.push_back(-w);
        if(b > 0)v.push_back(b);
        int sub = 0;
        for(int i = 0; i < sz(v); i++){
            if(v[i] > 0) sub += v[i];
        }
    }
    
    return 0;
}