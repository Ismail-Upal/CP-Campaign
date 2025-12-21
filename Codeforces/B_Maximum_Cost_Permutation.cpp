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
        vector<int> v(n);
        set<int> se;
        for(int i = 1; i <= n; i++) se.insert(i);

        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] != 0) se.erase(se.find(v[i]));
        }

        for(int i = 0; i < n; i++){
            if(v[i] == 0){
                v[i] = *se.rbegin();
                se.erase(se.find(*se.rbegin()));
            }
        }

        int i = 0, j = n - 1, ans = n;

        while(i <= j and v[i] == i + 1){
            i++; 
            ans--;
        }
        while(j >= i and v[j] == j + 1){
            j--;
            ans--;
        }
 

        cout << ans << endl;
    }
    
    return 0;
}