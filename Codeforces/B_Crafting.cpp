#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> a(n+1), b(n+1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];


        for(int i = 1; i <= n; i++){
            a[i] = a[i] - b[i];
        }
        int neg = 0, negnm = 0, big = INT_MAX;;
        for(int i = 1; i <= n; i++){
            // cout << a[i] << ' ';
            if(a[i] < 0)neg++;
            negnm = min(a[i], negnm);
            if(a[i] >= 0) big = min(big, a[i]);
        }
        if(neg > 1) cout << "NO";
        else if(negnm+big >= 0) cout << "YES" ;
        else cout <<"NO";
        cout << endl;
    }
    
    return 0;
}