#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int k, n; cin >> k >> n;
        int i = 1, add = 0;
        vector<int> ans;
        while(k > 0 and i <= n and n - i + 1 >= k){
            ans.push_back(i);
            add++;
            i += add;
            k--;
        }
        
        if(k > 0) i -= add, i++;
        while(k > 0){
            ans.push_back(i); 
            k--; i++;
        }
        for(auto x : ans) cout << x << " " ;
        
        cout << endl;
    }
    
    return 0;
}