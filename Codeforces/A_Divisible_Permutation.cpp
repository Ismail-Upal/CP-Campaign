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
        int x = 1;
        vector<int> ans;
        ans.push_back(1);
        for(int i = n - 1, j = 1; i >= 1; i--, j++){
            if(j % 2){
                x = i + x;
            }
            else{
                x = x - i;
            }
            ans.push_back(x);
        }
        reverse(ans.begin(), ans.end());
        for(auto i : ans) cout << i << " "; 
        cout << endl;
    }
    
    return 0;
}