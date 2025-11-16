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
        int n; cin >> n;
        string s; cin >> s;
        deque<int> ans;
        if(s[0] == '0' or s[n - 1] == '0'){
            cout << -1 << endl; continue;
        }
        
        for(int i = 1; i <= n; i++){
            ans.push_back(i);
        }
        for(int i = 1; i < n - 1; i++){
            if(s[i] == '0'){
                swap(ans[i], ans[i + 1]);
            }
        }
        
        for(auto i : ans) cout << i << " " ;

        cout << endl;
    }
    
    return 0;
}