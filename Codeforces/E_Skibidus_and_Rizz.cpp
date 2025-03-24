#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n" -000000
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, m, k; cin >> n >> m >> k;
        if(k < abs(n - m) or k > max(n, m)){
            cout << -1 << endl; continue;
        }
        char a = '0', b = '1';
        if(m > n){
            swap(n, m);
            swap(a, b);
        }
        string s = "";
        
        while(n > 0 or m > 0){
            for(int i = 1; i <= k; i++){
                if(n > 0){
                    s += a;
                    n--;
                }
            }
            for(int i = 1; i <= k; i++){
                if(m > 0){
                    s += b;
                    m--;
                }
            }
        }

        cout << s << endl;
    }
    
    return 0;
}