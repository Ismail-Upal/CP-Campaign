#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

void Solve(){
    int root; cin >> root;

    multiset<int> ms;
    queue<int> q;

    if(root != -1){
        ms.insert(root);
        q.push(root);
    }

    while(!q.empty()){
        int cur = q.front(); q.pop();

        int l, r;
        cin >> l >> r;
        
        if(l != -1){
            ms.insert(l);
            q.push(l);
        }
        if(r != -1){
            ms.insert(r);
            q.push(r);
        }
    }

    int op; cin >> op;
    while(op--){
        int t; cin >> t;
        if(t == 1){
            int v; cin >> v;
            ms.insert(v);
        }
        else if(t == 2){
            if(ms.empty()) cout << -1 << endl;
            else{
                auto it = ms.end();
                it--;
         
                cout << *it << endl; 
                
                ms.erase(it);
            }
        }
    }
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t; 
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}