#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int x; cin >> x;
    multiset<int> l, r;
    l.insert(x);

    int q; cin >> q;
    while(q--){
        int a, b; cin >> a >> b;
        if(a > b) swap(a, b);

        int mx_l = *l.rbegin(), mn_r = *r.begin();
        if(b <= mx_l){
            l.erase(l.find(mx_l));
            r.insert(mx_l);
            l.insert(a);
            l.insert(b);
        }
        else if(a <= mx_l){
            l.insert(a);
            r.insert(b);
        }
        else if(r.empty()){
            l.insert(a);
            r.insert(b);
        }
        else if(a <= mn_r){
            l.insert(a);
            r.insert(b);
        }
        else{
            r.erase(r.find(mn_r));
            l.insert(mn_r);
            r.insert(a);
            r.insert(b);
        }

        cout << *l.rbegin() << endl;
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