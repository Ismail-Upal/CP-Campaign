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
        vector<int> v(n);
        for(int i = 0 ; i < n; i++) cin >> v[i];
        int x = 1, i = 0, j = n - 1 , ok = 1;

        while(i <= j and x <= n){
            if(v[i] == x){
                i++;
            }
            else if(v[j] == x){
                j--;
            }
            else ok = 0;
            x++;
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}