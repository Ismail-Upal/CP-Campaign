#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    set<int> se;
    for(int i = 1; i <= n; i++) se.insert(i);

    vector<int> ans(n + 1);
    for(int i = 1; i <= n; i++){
        set<int> tmp = se;
        int sum = 0;
        for(int j = i - 1; j >= 1; j--){
            int l = i - j + 1;
            sum += ans[j];     
            for(auto k : tmp){
                if((sum + k) % l == 0) tmp.erase(tmp.find(k));
            }  
        }
    }
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}