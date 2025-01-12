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
    
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m), c(n + m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    
    int i = 0, j = 0;
    while(i < n or j < m){
        if((a[i] < b[j] and i < n) or j == m){
            c[i+j] = a[i];
            i++;
        }
        else{
            c[i+j] = b[j];
            j++;
        }
    }
    

    for(int i = 0; i < n+m; i++) cout << c[i] << " ";
    
    return 0;
}