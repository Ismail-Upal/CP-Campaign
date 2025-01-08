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
        string s; cin >> s;
        int first = stoi(s), n = sz(s) - 1;

        int l, r;
        int last = 0, mx = 0;
        for(int i = 0; i < sz(s); i++){
            string t = "";
            for(int j = i; j <= sz(s); i++){
                t += s[j];
            }
            int last = stoi(t);
            
        }
    }
    
    return 0;
}