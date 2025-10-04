#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    int n, a, b; cin >> n >> a >> b;
    int A = 0, B = 0;
    string s; cin >> s;
    for(auto i : s){
        if(i == 'c') cout << "No";
        if(i == 'a'){
            if(A + B < a + b){
                cout << "Yes"; A++;
            }
            else cout << "No";
        }
        if(i == 'b'){
            if(A + B < a + b and B < b){
                cout << "Yes"; B++;
            }
            else cout << "No";
        }
        cout << endl;
    }
    
    return 0;
}