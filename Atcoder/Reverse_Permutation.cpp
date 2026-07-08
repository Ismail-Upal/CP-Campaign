#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    int o = count(s.begin(), s.end(), 'o');

    vector<int> l, r;
    for(int i = 0, j = 0; i < n; i++){
        if(j % 2 == 0) r.push_back(i + 1);
        else l.push_back(i + 1);

        if(s[i] == 'o') j++;
        if(j == o) break;
    }
    reverse(l.begin(), l.end());

    if(o % 2){
        reverse(l.begin(), l.end());
        reverse(r.begin(), r.end());
        swap(l, r);
    } 
    
    if(o){
        for(auto i : l) cout << i << " ";
        for(auto i : r) cout << i << " ";
    }
    for(int i = 0; i < n; i++){
        if(o == 0) cout << i + 1 << "  ";
        if(s[i] == 'o') o--;
    }
    cout << endl;
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