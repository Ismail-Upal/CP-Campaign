#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    map<int, vector<int>> mp;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x % 6 == 0) mp[6].push_back(x);
        else if(x % 2 == 0) mp[2].push_back(x);
        else if(x % 3 == 0) mp[3].push_back(x);
        else mp[0].push_back(x);
    }

    vector<int> ans;
    for(auto i : mp){
        if(i.first == 6){
            for(auto j : i.second){
                ans.push_back(j);
            }
        }
    }
    for(auto i : mp){
        if(i.first == 2){
            for(auto j : i.second){
                ans.push_back(j);
            }
        }
    }
    for(auto i : mp){
        if(i.first == 0){
            for(auto j : i.second){
                ans.push_back(j);
            }
        }
    }
    for(auto i : mp){
        if(i.first == 3){
            for(auto j : i.second){
                ans.push_back(j);
            }
        }
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