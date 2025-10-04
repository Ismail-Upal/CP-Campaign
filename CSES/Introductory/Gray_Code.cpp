#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
auto gray(int n){
    vector<string> ans;
    if(n == 1){
        ans.push_back("0");
        ans.push_back("1");
        return ans;
    }
    vector<string> pres = gray(n - 1);
    int s = pres.size();
    for(int i = 0; i < s; i++){
        ans.push_back("0"+pres[i]);
    }
    for(int i = s-1; i>=0; i--){
        ans.push_back("1" + pres[i]);
    }
    return ans;
}
int32_t main()
{   
    opt();
 
    int n; cin >> n;
    vector<string>ans = gray(n);
    for(auto i : ans) cout << i << endl;
    
    return 0;
} 