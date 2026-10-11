#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    vector<int> ans;
    int i = 1;
    while(i <= n){
        if(v[i] == 0){
            ans.push_back(i);
        }
        else{
            ans.push_back(n + 1);
            while(i <= n){
                ans.push_back(i);
                i++;
            }
        }

        if(i == n){
            ans.push_back(n + 1);
        }
        i++;
    }
    for(auto i : ans) cout << i << " ";
    cout << endl;
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