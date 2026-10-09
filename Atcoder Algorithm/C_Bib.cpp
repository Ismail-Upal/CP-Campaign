#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    // 108124
    // a*bca*bc

    string s; cin >> s;
    int n = s.size();

    int ok = 0;
    for(int i = 0; i < n; ){
        if(s[i] == 'a'){
            while(i < n and s[i] == 'a') i++;
        }

        if(i < n and s[i] == 'b'){
            i++;
            if(i < n and s[i] == 'c'){
                i++;
                if(i < n and s[i] == 'a'){
                    while(i < n and s[i] == 'a') i++;
                }

                if(i < n and s[i] == 'b'){
                    i++;
                    if(i < n and s[i] == 'c'){
                        i++;
                        if(i == n){
                            ok = 1; break;
                        }
                    }
                    else break;
                }
                else break;
            }
            else break;
        }
        else break;
    }

    if(ok) cout << "YES";
    else cout << "NO";
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