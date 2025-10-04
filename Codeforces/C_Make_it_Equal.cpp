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
        multiset<int> se1, se2;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            x %= k;
            se1.insert(x);
        }
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            x %= k;
            se2.insert(x);
        }

        for(auto i : se1){
            if(se2.find(i) != se2.end()){
                se2.erase(se2.find(i));
            }
            else{
                int x = k - i;
                if(se2.find(x) != se2.end()){
                    se2.erase(se2.find(x));
                }
            }
        }
        if(se2.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}