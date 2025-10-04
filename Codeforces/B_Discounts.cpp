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
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        for(int i = 0; i < m; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        int i = 0, j = 0, free = 0;

        while(i < n and j < m){
            if(b[j] != 1){
                free += a[i];
            }
            else if(b[j] == 1){
                free += a[i];
            }
            i += b[j]; j++;
        }

        cout << sum - free << endl;
    }
    
    return 0;
}