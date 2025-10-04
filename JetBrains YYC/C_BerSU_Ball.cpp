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
    
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int m; cin >> m;
    int b[m];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(a, a + n); sort(b, b + m);

    int i = 0, j = 0, pair = 0;
    while(i < n and j < m){
        if(a[i] == b[j]) pair++, i++, j++;
        else if(a[i] + 1 == b[j]) pair++, i++, j++;
        else if(a[i] == b[j] + 1) pair++, i++, j++;
        else if(a[i] < b[j]) i++;
        else if(a[i] > b[j]) j++;
    }
    cout << pair ;
    
    return 0;
}