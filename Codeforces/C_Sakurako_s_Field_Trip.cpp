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
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }
        
        int i = n / 2;
        int j = (n + 1) / 2; j++;
        while(i >= 1){
            if(v[i] != v[j]){
                if(v[i] == v[i + 1] or v[j] == v[j - 1]){
                    swap(v[i], v[j]);
                }
            }
            i--; j++;
        }
        int ans = 0;
        for(int i = 1; i < n; i++){
            if(v[i] == v[i + 1]) ans++;
        }
        cout << ans << endl;
    }           
    
    return 0;
}