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
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int ok = 1;
        int num = 0;
        for(int i = 0, j = 0; j < n; ){
            num += s[j] - '0'; 
            if(j - i + 1 < k) j++;
            else if(j - i + 1 == k){
                if(num == k){
                    ok = 0; break;
                }
                num -= s[i] - '0';
                i++; j++;
            } 
        }
        
        if(!ok){
            cout << "NO" << endl; continue;
        }
        cout << "YES" << endl;
        vector<int> ans(n); 
        int on = n, of = 1;
        
        for(int i = 0; i < n; i++){
            if(s[i] == '0') ans[i] = on--;
            else ans[i] = of++;
        }
        for(auto i : ans) cout << i << " " ;
        cout << endl;
    }
    
    return 0;
}