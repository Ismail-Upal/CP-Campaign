#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s, t; cin >> s >> t;

    int on1 = 0, off1 = 0;
    for(int i = 0; i < n; i += 2){
        if(s[i] == '1') on1++;
        else off1++;
    }
    int on2 = 0, off2 = 0;
    for(int i = 0; i < n; i += 2){
        if(t[i] == '1') on2++;
        else off2++;
    }
    if(on1 != on2 or off1 != off2){
        cout << "NO" << endl; return;
    }
    
    on1 = 0, off1 = 0;
    for(int i = 1; i < n; i += 2){
        if(s[i] == '1') on1++;
        else off1++;
    }
    on2 = 0, off2 = 0;
    for(int i = 1; i < n; i += 2){
        if(t[i] == '1') on2++;
        else off2++;
    }
    if(on1 != on2 or off1 != off2){
        cout << "NO" << endl; return;
    }


    cout << "YES" << endl;
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