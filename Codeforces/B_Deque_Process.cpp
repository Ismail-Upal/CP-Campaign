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
        for(int i = 0; i < n; i++) cin >> v[i];
        string ans = "";
        int i = 0, j = n - 1;
        int prev, ok = 1;
        while(i <= j){
            if(ans.empty()){
                ans.push_back('L');
                prev = v[i]; i++;
                continue;
            }
            if(ok == 1){
                if(v[i] < v[j]){
                    ans += 'L'; i++;
                }
                else{
                    ans += 'R'; j--;
                }
                ok = 2;
            }
            else if(ok == 2){
                if(v[i] > v[j]){
                    ans += 'L'; i++;
                }
                else{
                    ans += 'R'; j--;
                }
                ok = 1;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}