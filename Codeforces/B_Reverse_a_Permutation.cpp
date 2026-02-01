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
        for(int i = 1; i <= n; i++) cin >> v[i];
        int i = 1, j = n, x = n;
        while(i <= n and v[i] == x) i++, x--;
        while(i >= 1 and v[j] != x) j--;
        
        if(i < j){
            while(i < j){
                swap(v[i], v[j]);
                i++, j--;
            }
        }
        for(int i = 1; i <= n; i++) cout << v[i] << " " ;
        cout << endl;
    }
    
    return 0;
}