#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int a, b; cin >> a >> b;
    if(a > b) cout << "Argentina";
    else if(a < b) cout << "Brazil";
    else{
        while(a == b){
            string s, t; cin >> s >> t;
            a = 0, b = 0;
            for(auto i : s){
                if(i == '1') a++;
            }
            for(auto i : t){
                if(i == '1') b++;
            }

            if(a > b) cout << "Argentina";
            else if(a < b) cout << "Brazil";
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