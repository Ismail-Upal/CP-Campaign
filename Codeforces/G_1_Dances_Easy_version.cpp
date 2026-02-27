#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n, m; cin >> n >> m;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            if(i == 0) a[i] = 1;
            else cin >> a[i];
        }
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int ans = 0;
        int i = 0, j = n - 1;
        while(i < j and (a[0] >= b[i] or a[j] >= b[n - 1])){
            ans++;
            i++, j--;        
        }
        for(int k = i; k <= j; k++){
            if(a[k] >= b[k]) ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}