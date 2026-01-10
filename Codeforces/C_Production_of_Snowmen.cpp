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
        vector<int> a(n), b(n), c(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++) cin >> c[i];
  
        ll cnt1 = 0;
        for(int i = 0; i < n; i++){
            int ok = 1, k = i;
            for(int j = 0; j < n; j++){
                if(a[k % n] >= b[j]) ok = 0;
                k++;
            }
            if(ok) cnt1++;
        }

        ll cnt2 = 0;
        for(int i = 0; i < n; i++){
            int ok = 1, k = i;
            for(int j = 0; j < n; j++){
                if(c[k % n] <= b[j]) ok = 0;
                k++;
            }
            if(ok) cnt2++;
        }

        cout << cnt1 * cnt2 * n << endl;
    }
    
    return 0;
}