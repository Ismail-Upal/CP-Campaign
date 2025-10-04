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
        vector<int> v(n + 1);
        int lo = 1, hi = n, l = 1;
        while(lo <= hi){
            int r = l;
            while(r <= n){
                if(l % 2){
                    v[r] = lo;
                    lo++; r += k;
                }
                else{
                    v[r] = hi;
                    hi--; r += k;
                }
            }
            l++;
        }
        for(int i = 1; i <= n; i++) cout << v[i] << " " ;
        cout << endl;
    }
    
    return 0;
}