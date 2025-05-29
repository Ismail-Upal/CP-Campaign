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
        vector<int> v(n); 
        for(int i = 0; i < n; i++) cin >> v[i];

    
        string a ;
        vector<string> ans;

        for(int i = 0; i < n; i++){
            string b;

            while(sz(a) < v[i]){
                a += 'a';
            }
            while(sz(b) < v[i]){
                b += 'a';
            }

            if(sz(ans[sz(ans) - 1]) < sz(a))ans.pop_back();
            ans.push_back(a);
            ans.push_back(b);

            a = b;
        }
        for(auto i : ans) cout << i << endl;
    }
    
    return 0;
}