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
    
    tc{
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int tot_inv = 0;
        for(int i = 0; i < n ;i++){
            int x = v[i];
            for(int j = i; j < n; j ++){
                if(v[j] < x) tot_inv++;
            }
        }
        int tmp = tot_inv, l = 0, r = 0;
        for(int i = 0; i < n; i++){
            int x = v[i], cnt = tot_inv;
            for(int j = i; j < n; j++){
                if(v[j] < x) cnt--;
                else if(v[j] > x) cnt++;
                if(cnt < tmp){
                    l = i, r = j;
                    tmp = cnt;
                }   
            }
        }
        cout << l + 1 << " " << r + 1 << endl;
    }
    
    return 0;
}