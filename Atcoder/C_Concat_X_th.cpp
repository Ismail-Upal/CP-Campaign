#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 3;
int n, k, x;
vector<string> v;
vector<int> tmp;
vector<string> ans;

void gen(int i){
    if(i >= k){
        string t = "";
        for(int j = 0; j < k; j++) t += v[tmp[j]];
        ans.push_back(t);
        return;
    }
    for(int j = 0; j < n; j++){
        tmp.push_back(j);
        gen(i + 1);
        tmp.pop_back();
    }
}

int main()
{   
    opt();
    
    cin >> n >> k >> x;
    
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        v.push_back(s);
    }


    gen(0);
    sort(ans.begin(), ans.end());
    
    cout << ans[x - 1] ;
    
    return 0;
}