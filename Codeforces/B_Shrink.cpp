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
        deque<int> v(n);
        int k = 1, i = 0, j = n - 1;
        while(k <= n){
            if(k % 2) v[i++] = k++;
            else v[j--] = k++;
        }
        for(auto i : v) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}